#include <iostream>
#define ll long long int
#include <fstream> 
#include<time.h> 
using namespace std;

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		
		ll count=0;
        
        ll h[n][26];
        
        for(ll i=0;i<n;i++)
        	for(ll j=0;j<26;j++)
        		h[i][j]=0;
        
        for(ll i=0;i<n;i++)
        {
            ll sum=0;
            for(ll j=0;j<26 && i>0;j++)
                h[i][j]+=h[i-1][j];
            for(ll j=s[i]-'a'+1;j<26;j++)
                sum+=h[i][j];
            h[i][s[i]-'a']++;
                
            count+=sum+1;

        }
        cout<<count<<endl;
		
	}
	
	return 0;
}
