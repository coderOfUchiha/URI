#include<iostream>
using namespace std;
int main()

{
    int a,i,j=0,b[100],k;
    for(i=1;i<=100;i++)
    {
      cin>>a;
           b[j]=a;
           j++;
      }
       int m= b[0];
        for(j=1;j<100;j++)
        {
            if(m<b[j])
            {
                m=b[j];
                k=j;
            }
        }
      cout<<m<<"\n";
      cout<<k+1<<"\n";

      return 0;
}

