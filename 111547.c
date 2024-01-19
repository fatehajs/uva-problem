#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,onesColumn,tensColumn ,n1,result;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        result = abs((((n*63)+7492)*5)-498);
        onesColumn=result%10;
        n1=result/10;
        tensColumn=n1%10;
        printf("%d\n",tensColumn);
    }
    return 0;
}