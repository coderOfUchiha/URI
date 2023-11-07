#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float d;
    int a,b;
    cin>>a>>b;
    d = (a*b)/(12*1.0);
    cout<<fixed;
    cout<<setprecision(3)<<d<<"\n";
    return 0;
}

