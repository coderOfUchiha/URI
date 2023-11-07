#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,pos=0,neg=0,odd=0,even=0;
    cin>>a>>b>>c>>d>>e;
    if(a>0)
    {
        pos++;
    }
    else if(a<0)
    {
        neg++;
    }
    if(a%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    if(b>0)
    {
        pos++;
    }
    else if(b<0)
    {
        neg++;
    }
    if(b%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    if(c>0)
    {
        pos++;
    }
    else if(c<0)
    {
        neg++;
    }
    if(c%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    if(d>0)
    {
        pos++;
    }
    else if(d<0)
    {
        neg++;
    }
    if(d%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    if(e>0)
    {
        pos++;
    }
    else if(e<0)
    {
        neg++;
    }
    if(e%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    cout<<even<<" valor(es) par(es)\n";
    cout<<odd<<" valor(es) impar(es)\n";
    cout<<pos<<" valor(es) positivo(s)\n";
    cout<<neg<<" valor(es) negativo(s)\n";
    return 0;

}

