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

    ll a,b,c=0,n,i,d=0,j=1,k,u,v,l=0,m,t,s,p,r,ans=0,w,x,y,z,lcm,gcd,count,mn,max=0;
    string str,str2,st,ss;
    //memset(arr,0,sizeof(arr[0][0])*3*(n+10));
    while(1) {
            cin>>n;
    if(n==0) break;
    mep mp;
    vctr vc[1000],vc2,vc3;
    c=0;l=0;
//    cin>>t;
//    ll arr[k+10],brr[k+10];
//    memset(arr,0,sizeof(arr));
//    memset(brr,0,sizeof(brr));
    while(n--)
    {
        cin>>u>>v;
        if(mp[u]==0)
        {
            mp[u]=++c;
        }
        a=mp[u];
        if(mp[v]==0)
        {
            mp[v]=++c;
        }
        b=mp[v];
        vc[a].push_back(b);
        vc[b].push_back(a);
    }
//    for(i=1;i<=c;i++)
//    {
//        for(j=0;j<vc[i].size();j++)
//        {
//            cout<<vc[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    for(;;j++)
    {
        cin>>x>>y;
        if(x==0 && y==0) break;
        t=mp[x];
        int visited[1000]={},dp[1000]={},l=0;
        queue<int>q;
        q.push(t);
        visited[t]=1;
        dp[t]=0;
        while(!q.empty())
        {
            t=q.front();
            q.pop();
            if(dp[t]>y) break;
            l++;
            m=vc[t].size();
            for(i=0;i<m;i++)
            {
                if(visited[vc[t][i]]==0)
                {
                    visited[vc[t][i]]=1;
                    dp[vc[t][i]]=dp[t]+1;
                    q.push(vc[t][i]);
                }
            }
        }
//        cout<<c<<endl;
//        cout<<l<<endl;
        printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", j,c-l, x, y);
    }
    }
    return 0;
}
