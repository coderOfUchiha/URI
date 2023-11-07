#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    double a[100],x;
    cin>>x;
    for(i=0;i<100;i++)
    {
        a[i]=x;
        x=x/(2*1.00);
        cout<<fixed;
        cout<<setprecision(4)<<"N["<<i<<"] = "<<a[i]<<"\n";
    }
    return 0;
}

