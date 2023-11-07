#include<stdio.h>
int main()
{
    int x,y,i,j,inter=0,gre=0,draw=0,n;

            scanf("%d %d",&x,&y);
            if(x>y)
            {
                inter++;
            }
            else if(y>x)
            {
                gre++;
            }
            else
            {
                draw++;
            }
    for(i=1;i<=100;i++)
    {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n==1)
        {
            scanf("%d %d",&x,&y);
            if(x>y)
            {
                inter++;
            }
            else if(y>x)
            {
                gre++;
            }
            else
            {
                draw++;
            }
        }
        else if(n==2)
        {
            break;
        }
    }
    printf("%d grenais\n",i);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gre);
    printf("Empates:%d\n",draw);
    if(inter>gre)
    {
        printf("Inter venceu mais\n");
    }
    else if(gre>inter)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Não houve vencedor\n");
    }

}
