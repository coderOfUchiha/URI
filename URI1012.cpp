#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,e,f,i,j,k;
    cin>>a>>b>>c;
    e=.5*a*c;
    f= 3.14159*c*c;
    i= .5*(a+b)*c;
    j= b*b;
    k= a*b;
    cout<<fixed;
    cout<<"TRIANGULO: "<<setprecision(3)<<e<<"\n";
    cout<<"CIRCULO: "<<setprecision(3)<<f<<"\n";
    cout<<"TRAPEZIO: "<<setprecision(3)<<i<<"\n";
    cout<<"QUADRADO: "<<setprecision(3)<<j<<"\n";
    cout<<"RETANGULO: "<<setprecision(3)<<k<<"\n";
    return 0;
}
