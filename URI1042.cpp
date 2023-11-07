#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cin>>a>>b>>c;
    if(a<=b && b<=c && a<=c)
    {
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }
    else if(a<=b && c<=b && a<=c)
    {
        cout<<a<<"\n"<<c<<"\n"<<b<<"\n";
    }
    else if(b<=a && a<=c && b<=c)
    {
        cout<<b<<"\n"<<a<<"\n"<<c<<"\n";
    }
    else if(b<=c && c<=a && b<=a)
    {
        cout<<b<<"\n"<<c<<"\n"<<a<<"\n";
    }
    else if(c<=a && a<=b && c<=b)
    {
        cout<<c<<"\n"<<a<<"\n"<<b<<"\n";
    }
    else if(c<=b && b<=a && c<=a)
    {
        cout<<c<<"\n"<<b<<"\n"<<a<<"\n";
    }
    cout<<"\n";
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    return 0;
}
