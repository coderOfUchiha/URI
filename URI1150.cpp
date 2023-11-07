#include<iostream>
using namespace std;
int main()
{
    int x,z,i,sum=0,c=0,j;
    cin>>x>>z;
    if(x>=z)
    {
        for(i=1;i<=100;i++)
        {
            cin>>z;
            if(x<z)
                break;
        }
    }
    for(j=x;j<z;j++)
    {
        sum=sum+j;
        c++;

        if(sum>z)
            break;
    }
    cout<<c<<"\n";
}

