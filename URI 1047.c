#include<stdio.h>
int main()
{
    int a,b,c,d,h,m;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<=12 && a>=0 && c>=12 && c<24 && c>a && b<d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(c-a);
        m=(d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a<=12 && a>=0 && c>=12 && c<24 && c>a && b>d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(c-a)-1;
        m=(60+d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a<=12 && a>=0 && c<=12 && c>=0 && b<d && a>c && b>=0 && b<60 && d>=0 && d<60)
    {
        h=24-a+c;
        m=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a<=12 && a>=0 && c<=12 && c>=0 && b<d && a<c && b>=0 && b<60 && d>=0 && d<60)
    {
        h=c-a;
        m=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a<=12 && a>=0 && c<=12 && c>=0 && b>d && a>c && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(24-a+c)-1;
        m=(60+d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if(a<=12 && a>=0 && c<=12 && c>=0 && b>d && a<c && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(c-a)-1;
        m=(60+d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a>=12 && a<24 && c<=12 && c>=0 && a>c && b>d && b>=0 && b<60 && d>=0 && d<60)
    {
       h=(24-a+c)-1;
       m=(60+d-b);
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a>=12 && a<24 && c<=12 && c>=0 && a>c && b<d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(24-a+c);
        m=(d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a>=12 && a<24 && c>=12 && c<24 && a>c && b>d && b>=0 && b<60 && d>=0 && d<60)
    {
       h=(24-a+c)-1;
       m=(60+d-b);
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a>=12 && a<24 && c>=12 && c<24 && a>c && b<d && b>=0 && b<60 && d>=0 && d<60)
    {
       h=(24-a+c);
       m=(d-b);
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a>=12 && a<24 && c>=12 && c<24 && a<c && b>d && b>=0 && b<60 && d>=0 && d<60)
    {
       h=(c-a)-1;
       m=(60+d-b);
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a>=12 && a<24 && c>=12 && c<24 && a<c && b<d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(c-a);
        m=(d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a==c && a<24 && c<24 && a>=0 && c>=0 && b==d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(a-c)+24;
        m=(d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }

    else if(a==c && a<24 && c<24 && a>=0 && c>=0 && b>d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(a-c)+24-1;
        m=(60+d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a==c && a>=0 && a<24 && c>=0 && c<24 && b<d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=c-a;
        m=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a>=12 && a<24 && c>=12 && c<24 && a>c && b==d && b>=0 && b<60 && d>=0 && d<60)
    {
      h=(24-a+c);
      m=(d-b);
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if(a>=12 && a<24 && c>=12 && c<24 && a<c && b==d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(c-a);
        m=(d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a>=12 && a<24 && c<=12 && c>=0 && b==d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(24-a+c);
        m=(d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a<=12 && a>=0 && c<=12 && c>=0 && a<c && b==d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(c-a);
        m=(d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a<=12 && a>=0 && c<=12 && c>=0 && a>c && b==d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=24-a+c;
        m=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a<=12 && a>=0 && c>=12 && c<24 && b==d && b>=0 && b<60 && d>=0 && d<60)
    {
        h=(c-a);
        m=(d-b);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;
}
