#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cstring>
#define INF 10000000
#define ss stringstream
#define ll long long int
#define pi acos(-1)
#include<sstream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define vctr vector<long long>
#define dqe deque<long long>
#define pir pair<long long,long long>
#define mep map<long long,long long>
#define lop(i,n)  for(i=0;i<n;i++)
#define lop(n,i) for(i=n-1;i>=0;i--)
using namespace std;
//int arr[X]= {0};
//vector<int>prime;
//int cont=1;
//void sieve()
//{
//    int i,j;
//    for(i=3; i*i<X; i+=2)
//    {
//        if(arr[i]==0)
//        {
//            for(j=i*i; j<X; j+=i+i)
//            {
//                arr[j]=1;
//            }
//        }
//    }
//    prime.push_back(2);
//    for(i=3;i<=X;i+=2)
//    {
//        if(arr[i]==0) {prime.push_back(i);cont++;}
//    }
//}
int main()
{

    ll a,b,c=0,n,i,d=0,j,k,u,v,l=0,m,t,s,p,r,ans=0,w,x,y,z,lcm,gcd,count,mn,max=0;
    string str,str2,st,ss;
    //memset(arr,0,sizeof(arr[0][0])*3*(n+10));
    mep mp;
    vctr vc[210],vc2,vc3;
    queue<int>q;
//    cin>>t;
//    ll arr[k+10],brr[k+10];
//    memset(arr,0,sizeof(arr));
//    memset(brr,0,sizeof(brr));
ll color[210];
    while(1)
    {
        cin>>n;
        if(n==0) break;
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>u>>v;
            vc[u].push_back(v);
            vc[v].push_back(u);
        }
        memset(color,0,sizeof(color));
    c=0;
    color[u]=1;
    q.push(u);
    while(!q.empty())
    {
        a=q.front();
        q.pop();
        x=vc[a].size();
        for(i=0;i<x;i++)
        {
            if(color[vc[a][i]]==0)
            {
                if(color[a]==1) color[vc[a][i]]=2;
                else color[vc[a][i]]=1;
                q.push(vc[a][i]);
            }
            else if(color[vc[a][i]]==color[a])
            {
                c=1;
                break;
            }
        }
        if(c==1) break;
    }
            if(c==1) cout<<"NOT BICOLORABLE."<<endl;
        else cout<<"BICOLORABLE."<<endl;
        for(i=0;i<=n;i++) vc[i].clear();
        while(!q.empty()) q.pop();
}
return 0;
}
