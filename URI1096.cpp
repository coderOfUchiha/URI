#include<iostream>
using namespace std;
int main()
{
    int i,j,k=7;
    for(i=1;i<=9;i+=2)
    {
        k=7;
        for(j=1;j<=3;j++)
        {
            cout<<"I="<<i<<" J="<<k<<"\n";
            k--;
        }
    }
    return 0;
}
