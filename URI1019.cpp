#include<iostream>
using namespace std;
int main()
{
    int N, n1,a,n2,b;
    cin>>N;
    n1=N/(60*60);
    a=N%(60*60);
    n2=a/60;
    b=a%60;
    cout<<n1<<":"<<n2<<":"<<b<<"\n";
    return 0;

}
