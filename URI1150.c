#include<stdio.h>
int main()
{
    int x,z,i,sum=0,count=0,j;
    scanf("%d %d",&x,&z);
    if(x>=z)
    {
        for(i=1;i<=100;i++)
        {
            scanf("%d",&z);
            if(x<z)
                break;
        }
    }
    for(j=x;j<z;j++)
    {
        sum=sum+j;
        count++;

        if(sum>z)
            break;
    }
    printf("%d\n",count);
}
