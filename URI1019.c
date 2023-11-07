#include <stdio.h>
int main()
{
    int N, n1,a,n2,b;
    scanf("%d",&N);
    n1=N/(60*60);
    a=N%(60*60);
    n2=a/60;
    b=a%60;
    printf("%d:",n1);
    printf("%d:",n2);
    printf("%d\n",b);
    return 0;
}
