#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a[100];
    int i;
    for(i=0;i<100;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<100;i++)
    {
        if(a[i]<=10)
        {
            cout<<fixed;
            cout<<setprecision(1)<<"A["<<i<<"]"<<" = "<<a[i]<<"\n";

        }
    }
    return 0;
}
