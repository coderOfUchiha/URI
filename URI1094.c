#include<stdio.h>
int main()
{
    int a,n,i,C=0,R=0,S=0,sum;
    float p1,p2,p3;
    char c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&a,&c);
        if(c=='C')
        {
            C=C+a;
        }

        if(c=='R')
        {
            R=R+a;
        }

        if(c=='S')
        {
            S=S+a;
        }
    }
     sum = C+R+S;
     p1= (C/(sum*1.0))*100;
     p2= (R/(sum*1.0))*100;
     p3= (S/(sum*1.0))*100;
     printf("Total: %d cobaias\n",sum);
     printf("Total de coelhos: %d\n",C);
     printf("Total de ratos: %d\n",R);
     printf("Total de sapos: %d\n",S);
     printf("Percentual de coelhos: %.2f %%\n",p1);
     printf("Percentual de ratos: %.2f %%\n",p2);
     printf("Percentual de sapos: %.2f %%\n",p3);

}
