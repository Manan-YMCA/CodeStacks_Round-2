#include<bits/stdc++.h>
 
using namespace std;
 
string str[15];
int n;
int dp[1<<15][15];
int hashes[15];
int all_strings;
 
int calc(int mask,int lindex)
{
    if(mask == all_strings)
        return 0;
 
    if(dp[mask][lindex] != -1)
        return dp[mask][lindex];
 
    int res = INT_MIN;
 
    int k = __builtin_popcount(mask);
    for(int i=0;i<n;i++)
    {
        if(mask&(1<<i))
            continue;
        int v;
        if(k == 0)
            v = 0;
        else
            v = hashes[lindex]^hashes[i];
        res = max(res,v+calc(mask|(1<<i),i));
    }
 
    return dp[mask][lindex] = res;
}
 
int main()
{
    cin>>n;
 
    memset(dp,-1,sizeof(dp));
    all_strings = (1<<n)-1;
 
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        int h = 0;
        for(int j=0;j<str[i].length();j++)
            h += (str[i][j]-'a')+1;
        hashes[i] = h;
    }
 
    int ans = calc(0,0);
 
    cout<<ans;
 
    return 0;
}
