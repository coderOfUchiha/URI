
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a[12][12],sum=0,avg;
    int i,j;
    char x;
    cin>>x;
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
                if(j<i)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        cout<<fixed;
        cout<<setprecision(1)<<sum<<"\n";
    }
        else if(x=='M')
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
                    if(j<i)
                    sum=sum+a[i][j];
                  }
              }
              avg=sum/66;
             cout<<fixed;
           cout<<setprecision(1)<<avg<<"\n";
        }
}
