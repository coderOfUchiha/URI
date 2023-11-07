#include<iostream>
using namespace std;
int main()
{
    int i,sum=1,n;
    cin>>n;
    for(i=n;i>0;i--)
    {
        sum = sum*i;
    }
    cout<<sum<<"\n";
}
