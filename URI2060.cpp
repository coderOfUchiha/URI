#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=0,c=0,d=0,j,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>x;
       if(x%2==0)
       {
           a++;
       }

       if(x%3==0)
       {
           b++;
       }
       if(x%4==0)
       {
           c++;
       }
       if(x%5==0)
       {
           d++;
       }
    }
    cout<<a<<" Multiplo(s) de 2\n";
    cout<<b<<" Multiplo(s) de 3\n";
    cout<<c<<" Multiplo(s) de 4\n";
    cout<<d<<" Multiplo(s) de 5\n";

}





