#include<stdio.h>
int main()
{
    int A,NUMBER;
    float SALARY;
    scanf("%d %d",&NUMBER,&A);
    scanf("%f",&SALARY);
    SALARY = SALARY*A;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
