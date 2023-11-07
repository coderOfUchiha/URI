#include<stdio.h>
int main()
{
    int n,i,count=0,sum=0;
    float avg;
    for(i=0;i<100;i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            sum=sum+n;
            count++;
        }
        else if(n<0)
        {
            break;
        }
    }
    avg = (sum*1.00)/count;
    printf("%.2f\n",avg);
    return 0;
}

