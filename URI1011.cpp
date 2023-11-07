#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r,a;
    cin>>r;
    a = (4.0/3)*3.14159*r*r*r;
    cout<<fixed;
    cout<<"VOLUME = "<<setprecision(3)<<a<<"\n";
    return 0;
}
