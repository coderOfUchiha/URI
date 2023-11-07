#include<stdio.h>
int main()
{
    double a,b,c,t;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>=b && a>=c && b>=c)
    {
        a=a;
        b=b;
        c=c;
    }
    else if(a>=b && c>=b && a>=c)
    {
        a=a;
        t=b;
        b=c;
        c=t;
    }
    else if(b>=a && b>=c && a>=c)
    {
        t=a;
        a=b;
        b=t;
        c=c;

    }

    else if(b>=c && b>=a && c>=a)
    {
        t=a;
        a=b;
        b=c;
        c=t;

    }

    else if(c>=a && c>=b && a>=b)
    {
        t=a;
        a=c;
        c=b;
        b=t;
    }
    else if(c>=a && c>=b && b>=a)
    {
        t=a;
        a=c;
        c=t;
        b=b;
    }
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    if(a*a==b*b+c*c && (a!=b+c) && (a<b+c))
    {
       printf("TRIANGULO RETANGULO\n");
    }
    if(a*a>b*b+c*c && (a!=b+c) && (a<b+c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((a*a<b*b+c*c) && (a!=b+c) && (a<b+c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c && (a!=b+c) && (a<b+c))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a==b && b!=c) || (a==c && b!=c) || (b==c && a!=b) && (a!=b+c) && (a<b+c))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}

