#include<iostream>
#include<cstdio>
#define SZ 100010
using namespace std;
long long bit[SZ],lev[3][SZ];
void add(long long val,int idx,int n)
{
    while(idx<=n)
    {
        bit[idx]+=val;
        idx+=(idx&(-idx));
    }
}
long long sum(int idx)
{
    long long ans=0;
    while(idx)
    {
        ans+=bit[idx];
        idx-=(idx&(-idx));
    }
    return ans;
}
void upd(int l,int pos,long long val,int n)
{
    if(l==2)
    {
        long long tval=val,tval2=lev[l][pos];
        if(tval<0)
            tval=-tval;
        if(tval2<0)
            tval2=-tval2;
        add(tval-tval2,pos,n);
        lev[l][pos]=val;
    }
    else
    {
        if(pos!=1)
            upd(l+1,pos-1,lev[l][pos-1]-val,n);
        if(pos!=n)
            upd(l+1,pos,val-lev[l][pos+1],n);
        lev[l][pos]=val;
    }
}
int main()
{
    //freopen("in.txt","r",stdin);
    int n,q,val,typ,l,r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        upd(0,i+1,val,n);
    }
    //for(int i=1;i<n-1;i++)
       // cout<<sum(i)-sum(i-1)<<" ";
    //cout<<endl;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        scanf("%d",&typ);
        if(typ==1)
        {
            scanf("%d%d",&l,&r);
            if(r<l)
                swap(l,r);
            if(r-l<2)
                printf("1\n");
            else
            {
                //cout<<sum(r-2)<<" "<<sum(l-1)<<endl;
                if(sum(r-2)-sum(l-1)==0)
                    printf("1\n");
                else
                    printf("0\n");
            }
        }
        else
        {
            scanf("%d%d",&l,&val);
            upd(0,l,val,n);
        }
    }
    return 0;
}
