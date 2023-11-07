#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
    float a,b,c,ave;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        ave =(a*2+b*3+c*5)/10;
        cout<<fixed;
        cout<<setprecision(1)<<ave<<"\n";
    }
    return 0;
}

