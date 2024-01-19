#include<stdio.h>
#include<string.h>
int main()
{
  long long i,len ,count=0;
  char a[1000000];
  while(gets(a))
  {
      len=strlen(a);
      for(i=0;i<len;i++)
      {
          if(a[i]=='"')
          {
            count++;
            if(count%2==1) printf("``");
            else printf("''");
          }
          else printf("%c",a[i]);

      }
      printf("\n");

    }

return 0;
  }
