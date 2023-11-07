#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float sum=0,i;
    for(i=1;i<=100;i++)
    {
        sum = sum+(1/i);
    }
    cout<<fixed;
    cout<<setprecision(2)<<sum<<"\n";
    return 0;
}

