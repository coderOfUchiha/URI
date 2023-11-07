#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char a;
    float x;
    float t;
    cin>>a;
    switch(a)
    {
      case '1':
          cin>>x;
          t=x*4;
          cout<<fixed;
          cout<<"Total: R$ "<<setprecision(2)<<t<<"\n";
          break;
      case '2':
          cin>>x;
          t=x*4.50;
          cout<<fixed;
          cout<<"Total: R$ "<<setprecision(2)<<t<<"\n";
          break;
      case '3':
          cin>>x;
          t=x*5;
          cout<<fixed;
          cout<<"Total: R$ "<<setprecision(2)<<t<<"\n";
          break;

      case '4':
          cin>>x;
          t=x*2.00;
          cout<<fixed;
          cout<<"Total: R$ "<<setprecision(2)<<t<<"\n";
          break;
      case '5':
          cin>>x;
          t=x*1.50;
          cout<<fixed;
          cout<<"Total: R$ "<<setprecision(2)<<t<<"\n";
          break;
      default:
        cout<<"Invalid code\n";
    }
    return 0;

}
