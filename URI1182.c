#include<stdio.h>
int main()
{
    int i,j,n;
    float a[12][12],sum=0;
    char x;
    float avg;
    scanf("%d %c",&n,&x);

    if(x=='S')
    {
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%f",&a[i][j]);
            }
        }
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                if(j==n)
                {
                    sum= sum+a[i][j];
                }
            }
        }
        printf("%.1f\n",sum);


    }
    else if(x=='M')
            {
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%f",&a[i][j]);
            }
        }
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                if(j==n)
                {
                    sum= sum+a[i][j];
                }
            }
        }
        avg = sum/12;
        printf("%.1f\n",avg);
    }
}

