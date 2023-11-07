#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,x=0;
    cin>>a>>b>>c>>d>>e;
    if(a%2==0)
    {
        x++;
    }
    if(b%2==0)
    {
        x++;
    }
    if(c%2==0)
    {
        x++;
    }
    if(d%2==0)
    {
        x++;
    }
    if(e%2==0)
    {
        x++;
    }
    cout<<x<<" valores pares\n";
    return 0;
}

