#include<stdio.h>
#include<string.h>
int main()
{
    char a[600];
    int n;
    gets(a);
    n=strlen(a);

    if(n<=80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
