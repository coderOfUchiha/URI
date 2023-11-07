#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,x,n,i;
    float sum=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
       cin>>x;
       cin>>n;
       if(x==1001)
       {

           sum = sum+ n*1.50;
       }

       if(x==1002)
       {

           sum = sum+ n*2.50;
       }

       if(x==1003)
       {

           sum = sum+n*3.50;
       }
       if(x==1004)
       {

           sum = sum+n*4.50;
       }


       if(x==1005)
       {

           sum = sum+n*5.50;
       }


    }
    cout<<fixed;
    cout<<setprecision(2)<<sum<<"\n";

}

