#include<stdio.h>
 int main()
{
int i,t,n,j,max,a;

while(scanf("%d",&t)==1){
        for(i=0;i<t;i++){
    scanf("%d",&n);
    max=0;
    for(j=0;j<n;j++){
        scanf(" %d",&a);
        if(a>max) max=a;
    }
    printf("Case %d: %d\n",i+1,max);
        }
}
return 0;
}
