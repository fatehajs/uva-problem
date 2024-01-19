#include<stdio.h>
int sumDigit(int num)
{
    int sum=0;
    while(num>0)
    {
        sum+=num%10;
        num /=10;

    }
    return sum;
}
int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        while(n>=10)
        {
            n=sumDigit(n);
        }
        printf("%d\n",n);
    }
    return 0;



}
