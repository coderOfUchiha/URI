#include<stdio.h>
int main()
{
    int n,i,x;
    char a[100];
    scanf("%d",&n);
    {
      for(i=1;i<=n;i++)
      {
          scanf("%s %d",&a,&x);

          if(!strcmp(a,"Thor"))
          {
              printf("Y\n");
          }
          else
          {
              printf("N\n");
          }
      }
    }
}
