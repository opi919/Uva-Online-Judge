#include<stdio.h>
int main()
{
 int i,t,n,a[10],j,count,count1;

scanf("%d",&t);

    for(j=0;j<t;j++){
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        count=0;count1=0;
    for(i=0;i<9;i++)
    {
        if(a[i]<a[i+1]) count++;
        else if(a[i]>a[i+1]) count1++;
    }
       if(j==0) printf("Lumberjacks:\n");
    if(count==9 || count1==9) printf("Ordered\n");
    else printf("Unordered\n");
    }
    return 0;
}
