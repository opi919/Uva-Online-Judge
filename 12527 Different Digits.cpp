#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nore[5050]={0};
void norepeat()
{
    int i,j,k,l,s,m;
    for(int i=1;i<=5000;i++)
    {
        j=i;s=0;l=0;m=0;
        int check[10]={0};
        while(1)
        {
            k=j%10;
            j=j/10;
            s++;
            if(check[k]==0)
            {
                check[k]=1;
                l++;
            }
            else
            {
                m=1;
                break;
            }
            if(j==0) break;
        }
        if(m==1) nore[i]=nore[i-1];
        else
        {
            if(l==s)
            {
                nore[i]=nore[i-1]+1;
            }
            else nore[i]=nore[i-1];
        }
    }
}
int main()
{
    norepeat();
   int i,j,k,l,n,m,s;
//   for(i=0;i<100;i++)
//    cout<<nore[i]<<" ";
   while(cin>>n>>m)
   {
    cout<<nore[m]-nore[n-1]<<endl;
   }
    return 0;
}
