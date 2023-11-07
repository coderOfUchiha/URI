#include<stdio.h>
int main()
{
    int i,j,k=1,l=1,n;
    scanf("%d",&n);
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=1;j++)
            {
               k=i*i;
               l=i*i*i;
               printf("%d %d %d\n",i,k,l);
               k++;
               l++;
            }
            printf("%d %d %d\n",i,k,l);
        }
    }
    return 0;
}
