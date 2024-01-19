#include<stdio.h>
int main()
{
    char c;
    while(scanf("%c",&c)==1)
    {
        if(c!='\n') printf("%c",c-7);
        else printf("\n");

    }
    return 0;
}