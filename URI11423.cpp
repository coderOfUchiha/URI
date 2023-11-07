#include<iostream>
using namespace std;
int main()
{
    int n, i,j = 1,k = 2,l = 3;
    cin>>n;
    for(i = 0;i < n;i++)
    {
        cout<<j<<" "<<k<<" "<<l<<" "<<"PUM\n";
        j += 4;
        k += 4;
        l += 4;
    }
    return 0;
}
