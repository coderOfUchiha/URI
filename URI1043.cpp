#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C,d,e;
    cin>>A>>B>>C;
    if(B+C>A && A+B>C && A+C>B)
    {
        d = A+B+C;
        cout<<fixed;
        cout<<"Perimetro = "<<setprecision(1)<<d<<"\n";
    }
    else
    {
        e = .5*(A+B)*C;
         cout<<fixed;
        cout<<"Area = "<<setprecision(1)<<e<<"\n";
    }
    return 0;
}

