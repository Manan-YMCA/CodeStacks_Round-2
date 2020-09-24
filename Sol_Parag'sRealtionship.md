#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll segmentTree[2000000][18];
ll x[2000000];
ll sizes[2000000];

ll counts(ll x){
    ll count=0;
    ll freq[10]={0};
    while(x!=0){
        ll y = x%10;
        if(freq[y]==0){
            freq[y]=1;
            count++;
        }
        x/=10;
    }
    return count;
}

void buildtree(ll start,ll end,ll ind){
    if(start>end){
        return;
    }
    if(start==end){
        ll  y = counts(x[start]);
        segmentTree[ind][y]++;
        sizes[start] = y;
        return;
    }
    ll mid = (start+end)/2;
    buildtree(start,mid,2*ind+1);
    buildtree(mid+1,end,2*ind+2);
    for(ll i=1;i<=15;i++){
        segmentTree[ind][i] = segmentTree[2*ind+1][i] + segmentTree[2*ind+2][i];
    }
    return;
}


void update2(ll start,ll end,ll l,ll ind,ll val){
    if(start>end || start>l || end<l){
        return ;
    }
    if(start==end){
        segmentTree[ind][sizes[start]]--;
        x[start]=val;
        ll y =counts(x[start]);
        segmentTree[ind][y]++;
        sizes[start] =y;
        return;
    }
    ll mid = (start+end)/2;
    update2(start,mid,l,2*ind+1,val);
    update2(mid+1,end,l,2*ind+2,val);
    for(ll i=1;i<=14;i++){
        segmentTree[ind][i] = segmentTree[2*ind+1][i] + segmentTree[2*ind+2][i];
    }
    return;
}

void update1(ll start,ll end,ll l,ll ind,ll val){
    if(start>end || start>l || end<l){
        return ;
    }
    if(start==end){
        segmentTree[ind][sizes[start]]--;
        x[start]+=val;
        ll y =counts(x[start]);
        segmentTree[ind][y]++;
        sizes[start] = y;
        return;
    }
    ll mid = (start+end)/2;
    update1(start,mid,l,2*ind+1,val);
    update1(mid+1,end,l,2*ind+2,val);
    for(ll i=1;i<=15;i++){
        segmentTree[ind][i] = segmentTree[2*ind+1][i] + segmentTree[2*ind+2][i];
    }
    return;
}

ll query(ll start,ll end,ll l,ll r,ll ind,ll val){
    if(start>end || start>r || end<l){
        return 0;
    }
    if(start>=l && end<=r){
        return segmentTree[ind][val];
    }
    ll mid = (start+end)/2;
    return query(start,mid,l,r,2*ind+1,val) + query(mid+1,end,l,r,2*ind+2,val);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a;
    cin>>a;
    for(ll i=1;i<=a;i++){
        cin>>x[i];
    }
    buildtree(1,a,0);
    ll b;
    cin>>b;
    for(ll i=1;i<=b;i++){
        ll z;
        cin>>z;
        if(z==0){
            ll p,q;
            cin>>p>>q;
            update1(1,a,p,0,q);
        }
        else if(z==1){
            ll p,q;
            cin>>p>>q;
            update2(1,a,p,0,q);
        }
        else{
            ll p,q,r;
            cin>>p>>q>>r;
            cout<<query(1,a,p,q,0,r)<<"\n";
        }
        
      
    }
}
