#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=12;i++)
    {
        if(n%2==1)
        {
            cout<<n<<"\n";
        }
        n++;
    }
    return 0;
}
