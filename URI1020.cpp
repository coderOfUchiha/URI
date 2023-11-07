#include<iostream>
using namespace std;
int main()
{
    int N,n1,n2,a,b;
    cin>>N;
    n1=N/365;
    a=N%365;
    n2=a/30;
    b=a%30;
    cout<<n1<<" ano(s)\n";
    cout<<n2<<" mes(es)\n";
    cout<<b<<" dia(s)\n";
}



