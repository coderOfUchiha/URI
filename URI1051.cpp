#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n;
    cin>>n;
    cout<<fixed;
    if (n >= 0 && n <= 2000.00)
    {
        cout<<"Isento\n";
    }
    else if (n > 2000.00 && n <= 3000.00)
    {
        n = n - 2000.00;
        n = (n * 8) / 100;
        cout<<setprecision(2)<<"R$ "<<n<<"\n";
    }
    else if (n > 3000.00 && n <= 4500.00)
    {
        n = n - 3000.00;
        n = (n * 18) / 100.00;
        cout<<setprecision(2)<<"R$ "<<n+80<<"\n";
    }
    else if (n > 4500.00)
    {
        n = n - 4500.00;
        n = (n*28) / 100.00;
        cout<<setprecision(2)<<"R$ "<<n+350<<"\n";
    }
    return 0;

}

