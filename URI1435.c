#include<stdio.h>
int main()
{
    int i,j,c=0,k=1,n,a[100][100],l;
    while(n!=0)
    {
        scanf("%d",&n);
        for(l=n-1;l>=0;l--)
        {
           for(j=c;j<=c;j++)
        {
            for(i=c;i<=l;i++)
            {
                a[i][j]=k;
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for(j=n-1;j<=l;j++)
        {
            for(i=c;i<n;i++)
            {
               a[i][j]=k;
               printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for(i=c;i<=c;i++)
        {
            for(j=c+1;j<=l;j++)
            {
                a[i][j]=k;
               printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for(i=n-1;i<=l;i++)
        {
            for(j=c+1;j<l;j++)
            {
                a[i][j]=k;
               printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        k++;
        c++;
        }
        printf("\n");

    }
}
