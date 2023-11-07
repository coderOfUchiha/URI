#include<stdio.h>
int main()
{
    double A,B,C,R1,R2,a;
    scanf("%lf %lf %lf",&A,&B,&C);
    a = (B*B-4*A*C);
    R1 = (-B+sqrt(a))/2*A;

    R2 = (-B-sqrt(a))/2*A;
    if(A!=0 && a>0)
    {
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
