#include<iostream>
using namespace std;
int main()
{
    int n,a,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
        }
    }
    return 0;
}

