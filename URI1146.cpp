#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    while(1)
        {
        cin>>j;
        if(j==0)
        {
            break;
        }

        cout<<"1";
        for(k = 2;k <= j;k++)
        {
           cout<<" "<<k;
        }
        cout<<"\n";
    }
    return 0;
}

