#include<iostream>
using namespace std;
int main()
{
    float a,b,g,d,e,f,c=0;
    cin>>a>>b>>g>>d>>e>>f;
    if(a>0)
    {
        c++;
    }
    if(b>0)
    {
        c++;
    }
    if(g>0)
    {
        c++;
    }
    if(d>0)
    {
        c++;
    }
    if(e>0)
    {
        c++;
    }
    if(f>0)
    {
        c++;
    }
    cout<<c<<" valores positivos\n";
    return 0;
}
