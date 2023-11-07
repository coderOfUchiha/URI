#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0,x,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
    for(j=2;j<x;j++)
    {
        if(x%j==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<x<<" eh primo\n";
    }
    else
    {
        cout<<x<<" nao eh primo\n";
    }
       c=0;
    }

    return 0;
}
