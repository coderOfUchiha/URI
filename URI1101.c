#include<stdio.h>
int main()
{
    int x,y,i,sum=0,temp,j;
    for(i=0;i<100;i++)
    {
        scanf("%d %d",&x,&y);
        {
            if (x<=0 || y<=0)
                {
                    break;
                }
             if(x>y)
              {
                temp=x;
                x=y;
                y=temp;
              }
            if(x>0 && y>0)

            {
                for(j=x;j<=y;j++)
                {
                    printf("%d ",j);
                    sum = sum+j;

                }
            }
            printf("Sum=%d\n",sum);
            sum=0;


        }
    }
}
