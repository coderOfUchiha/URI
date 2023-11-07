#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,n,i,C=0,R=0,S=0,sum;
    float p1,p2,p3;
    char c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>c;
        if(c=='C')
        {
            C=C+a;
        }

        if(c=='R')
        {
            R=R+a;
        }

        if(c=='S')
        {
            S=S+a;
        }
    }
     sum = C+R+S;
     p1= (C/(sum*1.0))*100;
     p2= (R/(sum*1.0))*100;
     p3= (S/(sum*1.0))*100;
     cout<<"Total: "<<sum<<" cobaias\n";
     cout<<"Total de coelhos: "<<C<<"\n";
     cout<<"Total de ratos: "<<R<<"\n";
     cout<<"Total de sapos: "<<S<<"\n";
     cout<<fixed;
     cout<<"Percentual de coelhos: "<<setprecision(2)<<p1<<" %"<<"\n";
     cout<<"Percentual de ratos: "<<setprecision(2)<<p2<<" %"<<"\n";
     cout<<"Percentual de sapos: "<<setprecision(2)<<p3<<" %"<<"\n";
     return 0;
}

