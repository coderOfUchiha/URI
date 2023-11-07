#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h,i,j,k,l,ave;
    int count=0;
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    if(a>0)
    {
        count++;
        g=a;
    }
    else
    {
        g=0;
    }
    if(b>0)
    {
        count++;
        h=b;
    }
    else
    {
        h=0;
    }
    if(c>0)
    {
        count++;
        i=c;
    }
    else
    {
        i=0;
    }
    if(d>0)
    {
        count++;
        j=d;
    }
    else
    {
        j=0;
    }
    if(e>0)
    {
        count++;
        k=e;
    }
    else
    {
        k=0;
    }
    if(f>0)
    {
        count++;
        l=f;
    }
    else
    {
        l=0;
    }
    ave=(g+h+i+j+k+l)/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",ave);
    return 0;

}
