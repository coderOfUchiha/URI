#include<stdio.h>
int main()

{
    int a,i,j=0,b[5],k;
    for(i=1;i<=5;i++)
    {
      scanf("%d",&a);
           b[j]=a;
           j++;
      }
       int max= b[0];
        for(j=1;j<5;j++)
        {
            if(max<b[j])
            {
                max=b[j];
                k=j;
            }
        }
      printf("%d\n%d\n",max,k+1);

      return 0;
}
