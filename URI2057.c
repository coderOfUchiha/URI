#include<stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum= a+b+c;
    if(sum<0)
    {
        printf("%d\n",24+sum);
    }
    else if(sum>24)
    {
        printf("%d\n",sum-24);
    }
    else
    {
        printf("%d\n",sum);
    }
}
