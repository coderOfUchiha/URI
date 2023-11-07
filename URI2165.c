#include<stdio.h>
int main()
{
    char a[600];
    int n;
    gets(a);
    n=strlen(a);
    if(n<=140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }
    return 0;
}
