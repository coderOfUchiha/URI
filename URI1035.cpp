#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,sum,sum1;
    cin>>a>>b>>c>>d;
    sum=a+b;
    sum1=c+d;
    if(b>c && d>a && sum1>sum && c>0 && d>0 && a%2==0)
    {
        cout<<"Valores aceitos\n";
    }
    else

    {
        cout<<"Valores nao aceitos\n";
    }
    return 0;
}
