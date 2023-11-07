#include<iostream>
using namespace std;
int main()
{
    int x,y;
    while(x!=y)
    {
        cin>>x>>y;

        if(x>y)
        {
            cout<<"Decrescente\n";
        }
        else if(x<y)
        {
            cout<<"Crescente\n";
        }
    }
    return 0;
}
