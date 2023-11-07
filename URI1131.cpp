#include<iostream>
using namespace std;
int main()
{
    int x,y,i,j,inter=0,gre=0,draw=0,n;

            cin>>x>>y;
            if(x>y)
            {
                inter++;
            }
            else if(y>x)
            {
                gre++;
            }
            else
            {
                draw++;
            }
    for(i=1;i<=100;i++)
    {
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>n;
        if(n==1)
        {
            cin>>x>>y;
            if(x>y)
            {
                inter++;
            }
            else if(y>x)
            {
                gre++;
            }
            else
            {
                draw++;
            }
        }
        else if(n==2)
        {
            break;
        }
    }
    cout<<i<<" grenais\n";
    cout<<"Inter:"<<inter<<"\n";
    cout<<"Gremio:"<<gre<<"\n";
    cout<<"Empates:"<<draw<<"\n";
    if(inter>gre)
    {
        cout<<"Inter venceu mais\n";
    }
    else if(gre>inter)
    {
        cout<<"Gremio venceu mais\n";
    }
    else
    {
        cout<<"Não houve vencedor\n";
    }

}
