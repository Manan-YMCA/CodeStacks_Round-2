#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define repA(i,a,b) for(int i=a;i<=b;i++)
#define repB(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mkp make_pair
#define ff first
#define ss second

int dp[3][100];


int minRest(int a[],int i, bool state[]){
	//base case
	if(i==0){
		if(((a[i]&2) and state[0]) or ((a[i]&1) and state[1])){
			return 0;
		}
		return 1;
	}

	//recursive case

	int j;
	if(state[0] and state[1])j=2;
	else if (state[1]) j=1;
	else j=0;
	if(dp[j][i]==-1){
		int gf1,gf2,none;
		gf1=gf2=none=101;

		if((a[i]&2) and state[0]){
			bool temp=state[1];
			state[1]=1;
			state[0]=0;
			gf1=minRest(a,i-1,state);
			state[0]=1;
			state[1]=temp;
		}

		if(((a[i]&1) and state[1])){
			bool temp=state[0];
			state[0]=1;
			state[1]=0;
			gf2=minRest(a,i-1,state);
			state[1]=1;
		}
		bool state0=state[0],state1=state[1];
		state[0]=state[1]=1;
		none=(1+minRest(a,i-1,state));
		state[0]=state0; state[1]=state1;
		
		dp[j][i]=min(none,min(gf1,gf2));
	}
	return dp[j][i];

}

void solve() {
	int n;
	cin>>n;
	int a[n];
	rep(i,n) cin>>a[i];
	bool state[2]={1,1};

	rep(i,3)rep(j,100)dp[i][j]=-1;

	cout<<minRest(a,n-1,state)<<endl;

	

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE

	// For getting input from input.txt file
	freopen("input.txt", "r", stdin);

	// Printing the Output to output.txt file
	freopen("output.txt", "w", stdout);

#endif

	ll t = 1;
	cin >> t;
	while (t--) {
		memset(dp,-1,sizeof(dp));
		solve();
	}

	return 0;
}
