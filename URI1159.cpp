#include<iostream>
using namespace std;
int main()
{
   int i,x,sum;
   while(1)
    {
        sum = 0;
        cin>>x;
        if(x == 0)
        {
            break;
        }
        if(x%2 != 0)
        {
            x++;
        }
        for(i = 0;i < 5;i++)
            {
              sum += x;
              x += 2;
            }
        cout<<sum<<"\n";
   }
    return 0;
}

