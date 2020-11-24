#include<stdio.h>
int main()
{
  int i,n,t,j,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        x=0;y=0;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1]) x++;
else if(a[j]==a[j+1]) {x=x+0;y=y+0;}
                else y++;
        }
        printf("Case %d: %d %d\n",i+1,y,x);
    }
return 0;
}
