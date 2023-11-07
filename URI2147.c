#include<stdio.h>
int main()
{
    char a[10000];
    int n,t,i;
    float s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%s",&a);
       n=strlen(a);
       s=((n*1.00)/100);
       printf("%.2f\n",s);
    }
    return 0;


}
