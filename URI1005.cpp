#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b;
    a=a*3.5;
    b=b*7.5;
    c=(a+b)/11;
    cout<<fixed;
    cout<<"MEDIA = "<<setprecision(5)<<c<<"\n";

}
