#include<stdio.h>
int main()
{
    int x,y,n,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
            }
            printf("%d\n",sum);
        }
    }
}
