#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c;
    a=a*2;
    b=b*3;
    c=c*5;
    d=(a+b+c)/10;
    cout<<fixed;
    cout<<"MEDIA = "<<setprecision(1)<<d<<"\n";
}
