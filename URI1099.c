#include<stdio.h>
int main()
{
    int x,y,i,n,sum=0,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x==y)
        {
            sum=0;
            printf("%d\n",sum);
        }
        else if(x<y)
        {
        for(x=x+1;x<y;x++)
        {
            if(x%2==1 || x%2==-1)
            {
                sum=sum+x;
            }
        }
        printf("%d\n",sum);
        sum=0;
        }
        else
        {
            for(y=y+1;y<x;y++)
            {
                if(y%2==1 || y%2==-1)
                {
                    sum=sum+y;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
    }

}
