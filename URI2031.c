#include<stdio.h>
int main()
{
    int n,i;
    char a[10],b[10],c[]="pedra",d[]="papel",e[]="ataque";
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s %s",&a,&b);
        if(strcmp(a,e)==0)
        {
            if(strcmp(b,c)==0)
            {
                printf("Jogador 1 venceu\n");
            }
            else if(strcmp(b,e)==0)
            {
                printf("Aniquilacao mutua\n");
            }
            else if(strcmp(b,d)==0)
            {
                printf("Jogador 1 venceu\n");
            }
        }
        else if(strcmp(a,c)==0)
        {
            if(strcmp(b,d)==0)
            {
                printf("Jogador 1 venceu\n");
            }
            else if(strcmp(b,c)==0)
            {
                printf("Sem ganhador\n");
            }
            else if(strcmp(b,e)==0)
            {
                printf("Jogador 2 venceu\n");
            }
        }
        else if(strcmp(a,d)==0)
        {
            if(strcmp(b,e)==0)
            {
                printf("Jogador 2 venceu\n");
            }
            else if(strcmp(b,d)==0)
            {
                printf("Ambos venceram\n");
            }
            else if(strcmp(b,c)==0)
            {
                printf("Jogador 2 venceu\n");
            }
        }

    }
}
