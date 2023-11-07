#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d %d %d",&a,&b,&c);
    d=a+b;
    e=abs(a-b);
    f=.5*(d+e);
    h=f+c;
    i=abs(f-c);
    g=.5*(h+i);
    printf("%d eh o maior\n",g);
    return 0;
}
