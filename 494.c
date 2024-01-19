#include<stdio.h>
#include<string.h>
int main()
{
    char txt[10000];
    int i,count,start;
    while(gets(txt))
    {
        count=0;
        start=0;
        for(i=0;txt[i]!='\0';i++)
        {
            if((txt[i]>='a' && txt[i]<='z')||(txt[i]>='A' && txt[i]<='Z') )
                start=1;
            else
            {
                if(start)
                {
                    count++;
                    start=0;
                }
            }
        }
        if(txt[i]=='\0'&&start==1)
            count++;
        printf("%d\n",count);
    }
    return 0;

}