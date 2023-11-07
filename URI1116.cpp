#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y,n,i;
    float sum;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(y!=0)
        {
            sum = x/(y*1.00);
            cout<<fixed;
            cout<<setprecision(1)<<sum<<"\n";
        }
        else
        {
            cout<<"divisao impossivel\n";
        }

    }
    return 0;

}
