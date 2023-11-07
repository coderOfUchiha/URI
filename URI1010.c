    #include<stdio.h>
int main()
{
    int code1,code2,n1,n2;
    float prize1,prize2,total;
    scanf("%d %d %f",&code1,&n1, &prize1);
    prize1 = prize1*n1;
    scanf("%d %d %f",&prize2,&n2,&prize2);
    prize2 = prize2*n2;
    total = prize1+prize2;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
