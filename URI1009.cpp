#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string a;
    double b,c,d;
    cin>>a;
    cin>>b>>c;
    d = b + ((c*15)/100);
    cout<<fixed;
    cout<<"TOTAL = R$ "<<setprecision(2)<<d<<"\n";
}
