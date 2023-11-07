#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float b,c;
    int a;
    cin>>a>>b;
    c= (a*1.0/b);
    cout<<fixed;
    cout<<setprecision(3)<<c<<" km/l\n";
    return 0;
}
