#include<stdio.h>
int main()
{
    int N,n1,n2,a,b;
    scanf("%d",&N);
    n1=N/365;
    a=N%365;
    n2=a/30;
    b=a%30;
    printf("%d ano(s)\n",n1);
    printf("%d mess(es)\n",n2);
    printf("%d dia(s)\n",b);
    return 0;
}
