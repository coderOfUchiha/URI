#include<stdio.h>
int main()
{
    float A,B,C,d,e;
    scanf("%f %f %f",&A,&B,&C);
    if(B+C>A && A+B>C && A+C>B)
    {
        d = A+B+C;
        printf("Perimetro = %.1f\n",d);
    }
    else
    {
        e = .5*(A+B)*C;
        printf("Area = %.1f\n",e);
    }
    return 0;
}
