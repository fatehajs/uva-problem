#include<stdio.h>
int main()
{
    int n,m,i,j,x=0;
    while(scanf("%d %d",&n,&m))
    {
        if(n==0 && m==0)
            break;
        if(x>0)
            printf("\n");
        char a[n][m];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf(" %c",&a[i][j]);
                if(a[i][j]!='*')
                    a[i][j]=0;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                    continue;
                if(j!=0 && a[i][j-1]=='*')
                    a[i][j]+=1;
                if(j!=m-1 &&a[i][j+1]=='*')
                    a[i][j]+=1;
                if(i!=0 && j!=0 && a[i-1][j-1]=='*')
                    a[i][j]+=1;
                if(i!=0 && a[i-1][j]=='*')
                    a[i][j]+=1;
                if(i!=0 && j!=m-1 && a[i-1][j+1]=='*')
                    a[i][j]+=1;
                if(i!=n-1 && j!=0 && a[i+1][j-1]=='*')
                    a[i][j]+=1;
                if(i!=n-1 && a[i+1][j]=='*')
                    a[i][j]+=1;
                if(i!=n-1 && j!=m-1 && a[i+1][j+1]=='*')
                    a[i][j]+=1;

            }
        }
        x++;
        printf("Field #%d:\n",x);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                    printf("*");
                else
                    printf("%d",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}