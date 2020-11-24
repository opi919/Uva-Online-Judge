#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t,l,n,m,p,w,s,g;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int knap[32]={0};
        for(j=0;j<n;j++)
        {
            cin>>p>>w;
            for(k=30;k>=w;k--)
            {
                knap[k]=max(knap[k],knap[k-w]+p);
            }
        }
        cin>>g;
        int cap,ans=0;
        for(j=0;j<g;j++)
        {
            cin>>cap;
            ans+=knap[cap];
        }
      cout<<ans<<endl;
    }
    return 0;
}
