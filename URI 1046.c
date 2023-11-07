#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    if(a>=12 && a<24 && b<=12 && b>=0)
    {
      t=24-a+b;
      printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if (a<=12 && a>=0 && b>=12 && b<24)
    {
        t=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if(a==b)
    {
        t=(a-b)+24;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if(a<=12 && a>=0 && b<=12 && b>=0 && a<b)
    {
       t=b-a;
       printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if(a<=12 && a>=0 && b<=12 && b>=0 && a>b)
    {
        t=12-a+b;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if(a>=12 && a<24 && b>=12 && b<24 && a>b)
    {
        t=24-a+b;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if(a>=12 && a<24 && b>=12 && b<24 && a<b)
    {
        t=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",t);

    }
    return 0;
}
