#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
	srand(time(0));    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n
       	ll a[n];
       	for(ll i=0;i<n;i++)
       	{
       		cin>>a[i];
		}
       		
    	
       		
       	ll dp[n][2];
       	dp[0][0] = 0;
    	dp[0][1] = 0;
    	for(int i = 1; i < n; ++i) 
		{
        	dp[i][0] = max(dp[i-1][1] + a[i-1] - 1,dp[i-1][0]);
        	dp[i][1] = max(dp[i-1][0] + a[i]-1, dp[i-1][1] + abs(a[i] - a[i-1]));
    	}
        cout<<max(dp[n-1][0],dp[n-1][1])<<"\n";
    }
	
	return 0;
}
