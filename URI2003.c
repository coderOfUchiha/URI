#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d ",&a)!= EOF)
    {
          scanf("%d",&b);
        if(a==8)

            printf("Atraso maximo: %d\n",60+b);

        if(a==7)


             printf("Atraso maximo: %d\n",b);

        if(a==9)
        {
            printf("Atraso maximo: 120\n");
        }
        else
        {
            printf("Atraso maximo: 0\n");
        }
    }


        return 0;

}
