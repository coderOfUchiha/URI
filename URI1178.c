#include<stdio.h>
int main()
{
    int i;
    double a[100],x;
    scanf("%lf",&x);
    for(i=0;i<100;i++)
    {
        a[i]=x;
        x=x/(2*1.00);
        printf("N[%d] = %.4lf\n",i,a[i]);
    }
    return 0;
}
