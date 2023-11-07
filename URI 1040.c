#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,N;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    N = (N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1f\n",N);
    if(N>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(N<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(5.0<=N && N<=6.9)
    {
        printf("Aluno em exame.\n");
    }
        float n,N5;
        scanf("%f",&n);
        N5 = (N+n)/2;
        if(N5>=7.0)
        {
          printf("Nota do exame: %.1f\n",n);
          printf("Aluno aprovado.\n");
          printf("Media final: %.1f",N5);
        }

        else if(N<5.0)
        {
            printf("Nota do exame: %.1f\n",n);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f",N5);
        }


    return 0;

}
