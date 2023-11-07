#include<stdio.h>
int main()
{
    int a,x,n,i;
    float sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       scanf("%d",&x);
       scanf("%d",&n);
       if(x==1001)
       {

           sum = sum+ n*1.50;
       }

       if(x==1002)
       {

           sum = sum+ n*2.50;
       }

       if(x==1003)
       {

           sum = sum+n*3.50;
       }
       if(x==1004)
       {

           sum = sum+n*4.50;
       }


       if(x==1005)
       {

           sum = sum+n*5.50;
       }


    }

    printf("%.2f\n",sum);
}
