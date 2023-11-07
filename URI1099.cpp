#include<iostream>
using namespace std;
int main()
{
    int x,y,i,n,sum=0,temp;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x==y)
        {
            sum=0;
            cout<<sum<<"\n";
        }
        else if(x<y)
        {
        for(x=x+1;x<y;x++)
        {
            if(x%2==1 || x%2==-1)
            {
                sum=sum+x;
            }
        }
        cout<<sum<<"\n";
        sum=0;
        }
        else
        {
            for(y=y+1;y<x;y++)
            {
                if(y%2==1 || y%2==-1)
                {
                    sum=sum+y;
                }
            }
            cout<<sum<<"\n";
            sum=0;
        }
    }

}
