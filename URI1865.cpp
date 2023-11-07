#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    string a[100];
    cin>>x;
    {
      for(i=1;i<=n;i++)
      {
          cin>>a>>x;

          if(!strcmp(a,"Thor"))
          {
              cout<<"Y\n";
          }
          else
          {
             cout<<"N\n";
          }
      }
    }
}

