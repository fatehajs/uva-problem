#include<stdio.h>
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int max=0,speed;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&speed);
            if(speed>max)
                {max=speed;}
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}