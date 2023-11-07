#include<iostream>
using namespace std;
int main(){
    int X, Y, i;
    cin>>X>>Y;
    if (X > Y)
    {
        int total = 0;
        for (i = Y; i <= X; i++) {
            if (i % 13 != 0) {
                total += i;
            }
        }
        cout<<total<<"\n";
    }
    else if(X < Y)
    {
        int total2 = 0;
        for (i = X; i <= Y; i++)
         {
            if (i % 13 != 0)
             {
                total2 +=i;
            }
        }

        cout<<total2<<"\n";
    }

}

