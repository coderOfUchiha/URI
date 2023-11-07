#include<stdio.h>
int main()
{
    int v,t,d,v1,t1,d1,a;
    scanf("%d %d",&v,&t);
    scanf("%d %d",&v1,&t1);
    d = 2*v*t;
    a = (v1-v)/(t1-t);
    d1 = (v1-v)*(t1-t) + .5*a*(2*2*(t1-t)*(t1-t));
    printf("%d\n",d);
    printf("%d\n",d1);
    return 0;

}
