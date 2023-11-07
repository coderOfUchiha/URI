#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=i*i;
            cout<<i<<"^2 = "<<sum<<"\n";
        }
    }
    return 0;
}
