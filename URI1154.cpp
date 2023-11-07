#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,c=0,sum=0;
    float avg;
     for(i=0;i<100;i++)
    {
        cin>>n;
        if(n>0)
        {
            sum=sum+n;
            c++;
        }
        else if(n<0)
        {
            break;
        }
    }
    avg = (sum*1.00)/c;
        cout<<fixed;
    cout<<setprecision(2)<<avg<<"\n";
    return 0;
}
