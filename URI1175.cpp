#include<iostream>
using namespace std;
int main()
{
    int x[20],i,j,temp;
    for(i=0;i<20;i++)
    {
        cin>>x[i];
    }
    for(i=0,j=19;i<20,j>=10;i++,j--)
    {
        temp=x[i];
        x[i]=x[j];
        x[j]= temp;
    }
    for(i=0;i<20;i++)
    {
        cout<<"N["<<i<<"] = "<<x[i]<<"\n";
    }
    return 0;
}

