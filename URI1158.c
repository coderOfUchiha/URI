#include<stdio.h>
int main()
{
    int i,j,sum=0,x,n,y;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x%2==1)
        {
            for(j=x;j<x+(y*2);j+=2)
               {
                 sum = sum+j;
               }
             printf("%d\n",sum);
             sum=0;
        }
        else
        {
            for(j=x+1;j<x+(y*2);j+=2)
               {
                 sum = sum+j;
               }
             printf("%d\n",sum);
             sum=0;
        }

    }
    return 0;
}
