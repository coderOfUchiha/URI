#include<iostream>
using namespace std;
int main()
{
    int i,n,j,t;
    long long int a[61];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(t>1 && t<=60)
        {
          a[0]=0;
          a[1]=1;
          for(j=2;j<=t;j++)
           {
              a[j]=a[j-1]+a[j-2];
           }
           cout<<"Fib("<<j-1<<") = ";
          for(j=t;j<=t;j++)
             {
                cout<<a[j]<<"\n";
             }
        }
        if(t==0)
        {
            cout<<"Fib(0) = 0\n";
        }
        else if(t==1)
        {
            cout<<"Fib(1) = 1\n";
        }


    }
    return 0;
}

