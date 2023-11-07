#include<stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        x=x-1;
        printf("%d\n",x);
    }
    return 0;
}
