#include<stdio.h>
int main()
{
    int r1,r2,r3,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&r1,&r2);
        r3 = r1+r2;
        printf("%d\n",r3);
    }
    return 0;
}
