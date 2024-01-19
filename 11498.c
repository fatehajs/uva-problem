
#include<stdio.h>
int main()
{
    long long int t,m,n,x,y;
    while(scanf("%lld",&t)==1)

    {
        if(t==0)
            break;
        scanf("%lld %lld",&m,&n);
        while(t--)
        {
            scanf("%lld %lld",&x,&y);
            if(x==m||y==n)
                printf("divisia\n");
            else if(x>m&&y>n)
                printf("NE\n");
            else if(x<m&&y>n)
                printf("NO\n");
            else if(x<m&&y<n)
                printf("SO\n");
            else
            printf("SE\n");

    }

}
return 0;
}