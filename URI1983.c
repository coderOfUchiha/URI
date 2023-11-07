#include<stdio.h>
int main()
{
    int r,n,i,R;
    float num,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %f",&r,&num);
        if(max<num)
        {
           max=num;
           R=r;
        }
    }
    if(max>=8)
    {
        printf("%d\n",R);
    }
    else
    {
        printf("Minimum note not reached\n");
    }
}
