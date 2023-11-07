#include<iostream>
using namespace std;
int main()
{
    int x,y,i,sum=0,temp,j;
    for(i=0;i<100;i++)
    {
        cin>>x>>y;
        {
            if (x<=0 || y<=0)
                {
                    break;
                }
             if(x>y)
              {
                temp=x;
                x=y;
                y=temp;
              }
            if(x>0 && y>0)

            {
                for(j=x;j<=y;j++)
                {
                    cout<<j<<" ";
                    sum = sum+j;

                }
            }
            cout<<"Sum="<<sum<<"\n";
            sum=0;


        }
    }
}
