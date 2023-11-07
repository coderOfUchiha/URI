#include<stdio.h>
int main()
{
    int h,n,sum,c=0,i,l,k=0,b=0;
    scanf("%d %d",&h,&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&l);
        k++;
        if(k==1)
        {
            b=l;
        }
        else
        {
            sum = l-b;
            b=l;
        }


        if(sum>h || sum <-h)
        {
            c++;
        }

    }
    if(c>0)
    {
        printf("GAME OVER\n");
    }
    else
    {
        printf("YOU WIN\n");
    }
    return 0;
}
