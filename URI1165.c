#include<stdio.h>
int main()
{
    int i,n,count=0,x,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
    for(j=2;j<x;j++)
    {
        if(x%j==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("%d eh primo\n",x);
    }
    else
    {
        printf("%d nao eh primo\n",x);
    }
       count=0;
    }

    return 0;
}
