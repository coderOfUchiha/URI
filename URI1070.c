#include<stdio.h>
int main()
{
    int n,i,sum;
    scanf("%d",&n);
    for(i=0;i<=12;i++)
    {
        sum=n+i;
        if(sum%2!=0)
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
