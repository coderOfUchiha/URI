#include<iostream>
using namespace std;
int main()
{
    int a,b = 0,c = 0,d = 0, e, i;
    cout<<"MUITO OBRIGADO\n";
    for(i = 0;i < 100;i++){
        cin>>a;
        if (a >= 1 && a <= 3)
            {
            if(a == 1)
                 b++;
            else if(a == 2)
                c++;
            else if(a == 3)
                d++;
           }
        else if(a == 4)
               break;
    }
    cout<<"Alcool: "<<b<<"\n";
    cout<<"Gasolina: "<<c<<"\n";
    cout<<"Diesel: "<<d<<"\n";
    return 0;
}



