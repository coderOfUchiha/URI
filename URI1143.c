#include<stdio.h>
int main()
{
    int i,j=1,k=1,l=1,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("%d %d %d\n",j,k,l);
       j++;
       k=j*j;
       l=j*j*j;
    }
    return 0;
}
