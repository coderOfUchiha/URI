#include<iostream>

using namespace std;
int main()
{
    int i,j,k=1,l=1,n;
    cin>>n;
    {
        for(i=1;i<=n;i++)
      {
         cout<<i<<" "<<i*i<<" "<<i*i*i<<"\n";
         cout<<i<<" "<<i*i+1<<" "<<i*i*i+1<<"\n";
      }
    }
    return 0;
}
