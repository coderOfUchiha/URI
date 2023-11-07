#include<iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        sum = i*n;
        cout<<i<<" x "<<n<<" = "<<sum<<"\n";
    }
    return 0;
}
