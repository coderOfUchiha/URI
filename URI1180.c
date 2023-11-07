#include<stdio.h>
int main()
{
    int n,a[1000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min = a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min= a[i];
            j=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",j);
    return 0;

}
