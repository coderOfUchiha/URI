#include<iostream>
using namespace std;
int main()
{
    int x,N,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>x;
        if(x%2==0 && x>0)
        {
            cout<<"EVEN POSITIVE\n";
        }
        else if(x%2==0 && x<0)
        {
            cout<<"EVEN NEGATIVE\n";
        }

        else if( x%2!=0 && x<0)
        {
             cout<<"ODD NEGATIVE\n";
        }
        else if(x%2!=0 && x>0)
        {
            cout<<"ODD POSITIVE\n";
        }
        else if(x==0)
        {
            cout<<"NULL\n";
        }
    }
    return 0;
}
