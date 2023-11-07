#include<iostream>
using namespace std;
int main()
{
    int x;
    while(x!=2002)
    {
        cin>>x;
        if(x!=2002)
        {
            cout<<"Senha Invalida\n";
        }
        else if(x==2002)
        {
            cout<<"Acesso Permitido\n";
        }
    }
    return 0;
}
