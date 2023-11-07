#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,N,n,N5;
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
    else if(N>=5.0 && N<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        n = (N+N5)/2;
        printf("Nota do exame: %.1f\n",N5);


        if(n>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(n<=4.9)
        {
            printf("Aluno reprovado.\n");

        }
        printf("Media final: %.1f\n",n);
    }
}
cout<<"Media final: "<<setprecision(1)<<;
