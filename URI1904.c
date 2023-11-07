#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[5],d[5],e[]="PAR",f[]="IMPAR";
    int i,n,j,sum,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s %s %s %s",&a,&c,&b,&d);
        scanf("%d %d",&x,&y);
        sum=x+y;
        if(strcmp(c,e)==0 && sum%2==0)
        {
                printf("%s",a);
        }

        else if(strcmp(c,f)==0 && sum%2==1)
            {
                printf("%s",a);
            }

        else if(strcmp(b,e)==0 && sum%2==0 )
            {
                printf("%s",b);
            }
        else if(strcmp(b,f)==0 && sum%2==1)
            {
                printf("%s",b);
            }

    }
}
