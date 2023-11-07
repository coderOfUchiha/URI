#include<iostream>
using namespace std;
int main()
{
    int i,j=1,k=1,l=1,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cout<<j<<" "<<k<<" "<<l<<"\n";
       j++;
       k=j*j;
       l=j*j*j;
    }
    return 0;
}
