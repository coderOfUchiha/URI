#include<stdio.h>
int main()
{
    double a[12][12],sum=0,avg;
    int i,j;
    char x;
    scanf("%c",&x);
    if(x=='S')
    {
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%lf",&a[i][j]);
            }
        }
        for(j=0;j<12;j++)
        {
            for(i=10-j;i>j;i--)
            {

               sum=sum+a[i][j];

            }
        }
        printf("%.1lf\n",sum);
    }
        else if(x=='M')
        {
            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    scanf("%lf",&a[i][j]);
                }
            }
             for(j=0;j<12;j++)
              {
                for(i=10-j;i>j;i--)
                  {

                   sum=sum+a[i][j];

                 }
              }

              avg=sum/30;
              printf("%.1lf\n",avg);
        }
        return 0;
}



