#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a[12][12],sum=0,avg;
    int i,j,n;
    char x;
    cin>>n>>x;
    if(x=='S')
    {
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                if(i==n)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        cout<<fixed;
        cout<<setprecision(1)<<sum<<"\n";

    }
    if(x=='M')
    {
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                if(i==n)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        avg = sum/12;
        cout<<fixed;
        cout<<setprecision(1)<<avg<<"\n";
    }

}
