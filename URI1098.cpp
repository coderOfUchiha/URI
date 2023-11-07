#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c=1,d=3,e,f;
    int x;
    for(a=0; a<=1.9; a=a+.2)
    {
        for(b=1.0; b<=3.0; b++)
        {
            e=b+a;
            if(a==0.0||a==1.0)
            {
                cout<<"I="<<a<<" J="<<e<<"\n";
            }

            else
            {
               cout<<"I="<<a<<" J="<<e<<"\n";
            }


        }
    }
    for(x=3; x<=5; x++)
    {
       cout<<"I=2"<<" J="<<x<<"\n";
    }

    return 0;
}

