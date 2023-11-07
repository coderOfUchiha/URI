#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=0;i<=n;i++)
    {


        if(i==n)
        {
            cout<<"!";
        }
        else
        {
            cout<<"Ho";
        }
        if(i<=n-2)
        {
            cout<<" ";
        }
    }
    cout<<"\n";
    return 0;
}

