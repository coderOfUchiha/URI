#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float N1,N2,N3,N4,N,n,N5;
    cin>>N1>>N2>>N3>>N4;
    N = (N1*2+N2*3+N3*4+N4*1)/10;
    cout<<fixed;
    cout<<"Media: "<<setprecision(1)<<N<<"\n";
    if(N>=7.0)
    {
      cout<<"Aluno aprovado.\n";
    }
    else if(N<5.0)
    {
        cout<<"Aluno reprovado.\n";
    }
    else if(N>=5.0 && N<=6.9)
    {
        cout<<"Aluno em exame.\n";
        cin>>N5;
        n = (N+N5)/2;
        cout<<fixed;
        cout<<"Nota do exame: "<<setprecision(1)<<N5<<"\n";


        if(n>=5.0)
        {
            cout<<"Aluno aprovado.\n";
        }
        else if(n<=4.9)
        {
            cout<<"Aluno reprovado.\n";

        }
        cout<<fixed;
        cout<<"Media final: "<<setprecision(1)<<n<<"\n";
    }
    return 0;
}
