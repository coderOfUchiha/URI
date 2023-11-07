#include<stdio.h>
int main()
{
    int a,b,i,j=0,k,max=0;
    while(scanf("%d",&a)!= EOF)
    {

        for(i=1;i<=a;i++)
        {
            scanf("%d",&b);
            if(max<b)
            {
                max=b;
            }

        }

        if(max<10)
        {
            printf("1\n");
        }
        else if(max>=10 && max <20)
        {
            printf("2\n");
        }
        else if(max>=20)
        {
            printf("3\n");
        }
        max = 0;

    }
}
