#include<iostream>
using namespace std;
int main()
{
    int n,a,i,j,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=0;
        cin>>a;
        for(j=1;j<a;j++)
        {
            if(a%j==0)
            {
                sum = sum +j;
            }
        }
        if(sum == a)
        {
            cout<<a<<" eh perfeito\n";
        }
        else
            cout<<a<<" nao eh perfeito\n";
    }
}
