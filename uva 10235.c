#include<stdio.h>
#include<math.h>
int main()
{
    long int i,j,k,l,m,n,r;
    while(scanf("%ld",&n)==1){
    k=2;
    l=0;
    while(k<=sqrt(n))
    {
       if(n%k==0)
       {
           l=1;
           break;
       }
       k++;
    }
    if(l==1) printf("%ld is not prime.\n",n);
    else
    {
        r=0;
        m=n;
        while (m!=0){
     r = r * 10;
      r = r + m%10;
      m       = m/10;
  }
  if(r==n) printf("%ld is prime.\n",n);
  else {
  k=2;
  l=0;
  while(k<=sqrt(r))
    {
       if(r%k==0)
       {
           l=1;
           break;
       }
       k++;
    }
    if(l==1) printf("%ld is prime.\n",n);
    else printf("%ld is emirp.\n",n);
    }
    }
}
    return 0;
}
