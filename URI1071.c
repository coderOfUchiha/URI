#include<stdio.h>
int main()
{
    int a,b,sum=0,i,s;
    scanf("%d %d",&a,&b);
    for(i=b+1;i<a;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
