#include<stdio.h>
int main()
{
    int N,i,sqr;
    scanf("%d",&N);
    {
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            sqr = i*i;
            printf("%d^2 = %d\n",i,sqr);
        }
    }
    }
    return 0;
}
