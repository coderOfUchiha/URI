#include<stdio.h>
int main()
{
    int i,j,k=1,l=0,m=0,n,o=1,p,a[100][100];
     a[i][j];
   for(p=1;p<=100;p++)

    {
        scanf("%d",&n);
        for(j=l;j<=l;j++)
        {
            printf("\t");
            for(i=m;i<n-o;i++)
            {
                a[i][j]=k;
                printf("%d ",a[i][j]);
            }
            printf("\n");

        }
        for(i=m;i<=m;i++)
        {
            printf("\t");
            for(j=l+1;j<n-o;j++)
            {
                a[i][j]=k;
               printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for(j=n-o;j>=n-o;j--)
        {
            printf("\t");
            for(i=n-o;i>=m;i--)
            {
                a[i][j]=k;
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for(i=n-o;i>=n-o;i--)
        {
            printf("\t");
            for(j=n-o-1;j>=l;j--)
            {
                a[i][j]=k;
               printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        l++;
        m++;
        k++;
        o++;
       if(n==0)
       {
           break;
       }
    }
}
