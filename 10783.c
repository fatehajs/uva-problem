#include<stdio.h>
int main()

{
    int T,a,b,i,sum;
    scanf("%d" ,&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        for(; a<=b; a++)
        {
            if(a%2!=0)
            {
                sum=sum+a;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}