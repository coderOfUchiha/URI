#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    float sum=1.00,x=1.00,y;
    for(i=1;i<=19;i++)
    {
        y=(i*2)+1;
        x=x*2;
        sum= sum + (y/x);
    }
    cout<<fixed;
    cout<<setprecision(2)<<sum<<"\n";

}

