#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j=0,k,m=0;
    while(cin>>a)
    {

        for(i=1;i<=a;i++)
        {
            cin>>b;
            if(m<b)
            {
                m=b;
            }

        }

        if(m<10)
        {
            cout<<"1\n";
        }
        else if(m>=10 && m <20)
        {
            cout<<"2\n";
        }
        else if(m>=20)
        {
            cout<<"3\n";
        }
        m = 0;

    }
}

