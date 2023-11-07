#include<stdio.h>
int main()
{
    int c,x,y,sum,r,a;
    scanf("%d %d %d %d %d",&c,&x,&y,&r,&a);
    sum = x+y;
    if(c==0)
    {
        if(sum%2==1)
        {
            if(r==0)
            {
                if(a==0)
                {
                    printf("Jogador 1 ganha!\n");
                }
                else
                {
                    printf("Jogador 1 ganha!\n");
                }
            }
            else
            {
                if(a==0)
                {
                    printf("Jogador 1 ganha!\n");
                }
                else
                {
                    printf("Jogador 2 ganha!\n");
                }
            }

        }
        else
        {
            if(r==0)
            {
                if(a==0)
                {
                    printf("Jogador 2 ganha!\n");
                }
                else
                {
                    printf("Jogador 1 ganha!\n");
                }
            }
            else
            {
                if(a==0)
                {
                    printf("Jogador 1 ganha!\n");
                }
                else
                {
                    printf("Jogador 2 ganha!\n");
                }
            }
        }
    }
    else
    {
        if(sum%2==0)
        {
            if(r==0)
            {
                if(a==0)
                {
                    printf("Jogador 1 ganha!\n");
                }
                else
                {
                    printf("Jogador 1 ganha!\n");
                }
            }
            else
            {
                if(a==0)
                {
                    printf("Jogador 1 ganha!\n");
                }
                else
                {
                    printf("Jogador 2 ganha!\n");
                }
            }
        }
        else
        {
            if(r==0)
            {
                if(a==0)
                {
                    printf("Jogador 2 ganha!\n");
                }
                else
                {
                    printf("Jogador 1 ganha!\n");
                }
            }
            else
            {
                if(a==0)
                {
                    printf("Jogador 1 ganha!\n");
                }
                else
                {
                    printf("Jogador 2 ganha!\n");
                }
            }
        }
    }

}
