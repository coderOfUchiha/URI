#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=100 && a>= -100 && b<=100 && b>= -100 && c<=100 && c>= -100)
    {
    if(a>b && b<=c)
    {
        cout<<":)\n";
    }
    else if(a<b && b>=c)
    {
        cout<<":(\n";
    }
    else if(a<b && b<c && (c-b)<(b-a))
    {
        cout<<":(\n";
    }
    else if(a<b && b<c &&(c-b)>=(b-a))
    {
        cout<<":)\n";
    }
    else if(a>b && b>c && (a-b)>(b-c))
    {
        cout<<":)\n";
    }
    else if(a>b && b>c && (a-b)<=(b-c))
    {
        cout<<":(\n";
    }
    else if(a==b)
    {
        if(b<c)
        {
           cout<<":)\n";
        }
        else
        {
            cout<<":(\n";
        }

    }

}
    return 0;
}

