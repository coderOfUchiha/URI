
#include<iostream>
using namespace std;
int main()
{
    int n,a,i;
    int b=0;
    int d=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a>=10 && a<=20)
        {
            b++;
        }
        else
        {
            d++;
        }
    }
    cout<<b<<" in\n";
   cout<<d<<" out\n";
    return 0;
}
