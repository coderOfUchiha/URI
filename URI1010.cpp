#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,d;
    float e,f,sum1,sum,total;
    cin>>a>>b>>e;
    cin>>c>>d>>f;
    sum= b*e;
    sum1= d*f;
    total=sum+sum1;
    cout<<fixed;
    cout<<"VALOR A PAGAR: R$ "<<setprecision(2)<<total<<"\n";
    return 0;

}
