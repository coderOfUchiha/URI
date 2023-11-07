#include<iostream>
using namespace std;
int main()
{
    int n,a[1000],i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    int m = a[0];
    for(i=1;i<n;i++)
    {
        if(m>a[i])
        {
            m= a[i];
            j=i;
        }
    }
    cout<<"Menor valor: "<<m<<"\n";
    cout<<"Posicao: "<<j<<"\n";
    return 0;

}

