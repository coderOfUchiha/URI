#include<stdio.h>
int main()
{
    int t,a[1000],i,j=0;
    scanf("%d",&t);
    for(i=0;i<1000;i++)
    {
       printf("N[%d] = %d\n",i,j);
       j++;
       if(j==t)
       {
           j=0;
       }
    }
    return 0;
}
