#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {


        if(i==n)
        {
            printf("!");
        }
        else
        {
            printf("Ho");
        }
        if(i<=n-2)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
