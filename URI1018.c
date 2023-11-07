#include <stdio.h>
int main() {
    int N, n1,temp,n2,temp1,n3,n4,n5,n6,n7,temp2,temp3,temp4,temp5,temp6;
    scanf("%d",&N);
    n1 = N / 100;
    temp = N % 100;
    n2 = temp/50;
    temp1= temp % 50;
    n3 = temp1/20;
    temp2 = temp1 % 20;
    n4 = temp2/10;
    temp3 = temp2 % 10;
    n5 = temp3/5;
    temp4 = temp3 % 5;
    n6 = temp4/2;
    temp5 = temp4%2;
    n7 = temp5/1;
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n", n1);
    printf("%d nota(s) de R$ 50,00\n", n2);
    printf("%d nota(s) de R$ 20,00\n",n3);
    printf("%d nota(s) de R$ 10,00\n",n4);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n6);
    printf("%d nota(s) de R$ 1,00\n",n7);
    return 0;
}






