#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=9;i+=2)
    {
        for(j=i+6;j>=i+4;j--)
        {
            cout<<"I="<<i<<" J="<<j<<"\n";
        }
        j=j+4;
    }
    return 0;
}

