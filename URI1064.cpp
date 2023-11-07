#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g=0,h=0,i=0,j=0,k=0,l=0,avg;
    int x=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0)
    {
        x++;
        g=a;
    }
    if(b>0)
    {
        x++;
        h=b;
    }
    if(c>0)
    {
        x++;
        i=c;
    }
    if(d>0)
    {
        x++;
        j=d;
    }
    if(e>0)
    {
        x++;
        k=e;
    }
    if(f>0)
    {
        x++;
        l=f;
    }
    avg = (g+h+i+j+k+l)/(x*1.0);
    cout<<fixed;
    cout<<x<<" valores positivos\n";
    cout<<setprecision(1)<<avg<<"\n";
    return 0;

}
