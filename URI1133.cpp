#include<iostream>

using namespace std;
int main()
{
    int x,y,i,temp;
    cin>>x>>y;
    if(x>=y)
    {
       for(i=x+1;i<y;i++)
        {
        if(i%5==2 || i%5==3)
          {
            cout<<i<<"\n";
          }
       }
    }
    if(x<=y)
    {
       for(i=y+1;i<x;i++)
        {
        if(i%5==2 || i%5==3)
          {
            cout<<i<<"\n";
          }
       }
    }



    return 0;
}
