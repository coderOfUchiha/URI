#include<stdio.h>
int main()
{
    int x,y,n,i;
    float sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(y!=0)
        {
            sum = x/(y*1.00);
            printf("%.1f\n",sum);
        }
        else
        {
            printf("divisao impossivel\n");
        }

    }
    return 0;

}
