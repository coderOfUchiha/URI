#include<stdio.h>
int main()
{
    double A,B,C,MEDIA;
    scanf("%lf %lf %lf",&A,&B,&C);
    A=2*A;
    B=3*B;
    C=5*C;
    MEDIA = (A+B+C)/10;
    printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}
