#include<stdio.h>
int main()

{
    char A;
    double SALARY,value,TOTAL;
    scanf("%s",&A);
    scanf("%lf %lf",&SALARY,&value);
    TOTAL = SALARY+(value*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
