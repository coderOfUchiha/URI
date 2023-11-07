#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,count=0;
    scanf("%d",&n);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a==n)
    {
        count++;
    }
     if(b==n)
    {
        count++;
    }
     if(c==n)
    {
        count++;
    }
     if(d==n)
    {
        count++;
    }
     if(e==n)
    {
        count++;
    }
    printf("%d\n",count);

}
