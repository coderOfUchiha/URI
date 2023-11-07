#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j=0;
    float n,a,b,avg, ar[2];
    for(i=0;i<100;i++)
    {
        cin>>n;
        if(n>0 && n<=10)
        {
            ar[j]=n;
            j++;
        }
        else
        {
            cout<<"nota invalida\n";
        }
        if(j>1)
            break;
    }
    avg=(ar[0]+ar[1])/2;
    cout<<fixed;
    cout<<"media = "<<setprecision(2)<<avg<<"\n";
    return 0;
}

