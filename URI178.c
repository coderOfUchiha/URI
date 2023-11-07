#include<stdio.h>
int main()
{
    int n,i,table;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        table = i*n;
        printf("%d x %d = %d\n",i,n,table);
    }
    return 0;
}
