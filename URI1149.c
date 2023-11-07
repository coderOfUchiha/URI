#include<stdio.h>
int main()
{
    int i,n,x,sum=0,j;
    scanf("%d %d",&x,&n);
    if(n<=0)
    {
        for(i=1;i<=100;i++)
          {
             scanf("%d",&n);
             if(n>0)
              {
                break;
              }
          }
    }
    for(j=x;j<x+n;j++)
    {
        sum= sum+j;
    }
    printf("%d\n",sum);
    return 0;

}
