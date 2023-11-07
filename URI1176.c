#include<stdio.h>
int main()
{
    int i,n,j,t;
    long long int a[61];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        if(t>1 && t<=60)
        {
          a[0]=0;
          a[1]=1;
          for(j=2;j<=t;j++)
           {
              a[j]=a[j-1]+a[j-2];
           }
           printf("Fib(%d) =",j-1);
          for(j=t;j<=t;j++)
             {
                printf(" %lld\n",a[j]);
             }
        }
        if(t==0)
        {
            printf("Fib(0) = 0\n");
        }
        else if(t==1)
        {
            printf("Fib(1) = 1\n");
        }


    }
    return 0;
}
