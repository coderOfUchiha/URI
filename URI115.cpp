#include<iostream>
using namespace std;
int main()
{
    int x,y,i;
    for(i=1;i<=100;i++)
    {
        cin>>x>>y;
        if(x>0 && y>0)
        {
            cout<<"primeiro\n";
        }
        if(x>0 && y<0)
        {
            cout<<"quarto\n";
        }
        if(x<0 && y>0)
        {
            cout<<"segundo\n";
        }
        if(x<0 && y<0)
        {
            cout<<"terceiro\n";
        }
        if(x==0 || y==0)
        {
            break;
        }
    }
}
