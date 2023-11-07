#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b+c>a || b+d>a || c+d>a || b+a>c || b+d>c || a+d>c || b+c>d || a+b>d || a+c>d || a+c>b || a+d>b || c+d>b)
    {
        printf("S\n");
    }
    else if(b+c<=a || b+d<=a || c+d<=a || b+a<=c || b+d<=c || a+d<=c || b+c<=d || a+b<=d || a+c<=d || a+c<=b || a+d<=b || c+d<=b)
    {
       printf("N\n");
    }
    return 0;
}
