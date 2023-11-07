#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0,i,s;
    cin>>a>>b;
    for(i=b+1;i<a;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
