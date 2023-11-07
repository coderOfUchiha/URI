#include<stdio.h>
int main()
{
    float N;
    scanf("%f",&N);
    if(0<=N<=25)
    {
        printf("[o,25]\n");
    }
     else if (25.00<N && N<=50.00)
    {
        printf("(25,50]\n");
    }
     else if(50.00<N<=75.00)
    {
        printf("(50,75]\n");
    }
     else if(75.00<N<=100.00)
    {
        printf("(75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}
