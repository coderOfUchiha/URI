#include<stdio.h>
int main()
{
    int n,a,i,count=0,not=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>=10 && a<=20)
        {
            count++;
        }
        else
        {
            not++;
        }
    }
    printf("%d in\n",count);
    printf("%d out\n",not);
    return 0;


}
