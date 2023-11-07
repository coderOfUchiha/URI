#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a)
    {
          cin>>b;
        if(a==8)

            cout<<"Atraso maximo: "<<60+b<<"\n";

        if(a==7)


            cout<<"Atraso maximo: "<<b<<"\n";

        if(a==9)
        {
            cout<<"Atraso maximo: 120\n";
        }
        else
        {
            cout<<"Atraso maximo: 0\n";
        }
    }


        return 0;

}

