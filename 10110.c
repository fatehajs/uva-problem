#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long n,root;
    while(scanf("%llu",&n)==1)
    {
        if(n==0)
            break;
        root=sqrt(n);
        if(root*root==n)
            printf("yes\n");
            else
            printf("no\n");
    }
    return 0;
}