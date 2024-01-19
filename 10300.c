#include<stdio.h>
int main()
{
    int T,n,i,j,sum,a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        sum=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d %d %d",&a,&b,&c);
            sum=sum+(a*c);
        }
        printf("%d\n",sum);
    }
    return 0;
}