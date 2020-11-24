#include<stdio.h>
//#include<conio.h>
#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//#define pi acos(0.0)*2
int main()
{
    int i,j,k,l,m,n,t,a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("\n%d%d%d",&a,&b,&n);
        scanf("%d%d%d",&c,&d,&m);
        k=n-m;
        if(b<d)
        {
            k--;
        }
        else if(b==d)
        {
            if(a<c) k--;
        }
        if(k<0) printf("Case #%d: Invalid birth date\n",i+1);
        else if(k>130) printf("Case #%d: Check birth date\n",i+1);
        else printf("Case #%d: %d\n",i+1,k);
    }
    return 0;

}
