#include<iostream>
using namespace std;
int main()
{
    int i,n,x,sum=0,j;
    cin>>x>>n;
    if(n<=0)
    {
        for(i=1;i<=100;i++)
          {
             cin>>n;
             if(n>0)
              {
                break;
              }
          }
    }
    for(j=x;j<x+n;j++)
    {
        sum= sum+j;
    }
    cout<<sum<<"\n";
    return 0;

}
