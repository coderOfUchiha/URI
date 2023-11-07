#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    float c,d;
    cin>>a>>b>>c;
    d = b*c;
    cout<<"NUMBER = "<<a<<"\n";
    cout<<fixed;
    cout<<"SALARY = U$ "<<setprecision(2)<<d<<"\n";
    return 0;

}
