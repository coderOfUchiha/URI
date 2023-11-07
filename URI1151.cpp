#include <iostream>
using namespace std;

int main()
 {

     int i, N, t1 = 0, t2 = 1, n;

     cin>>N;

     if(N>0 && N<46)
     {
       for (i = 1; i <= N; i++)
        {
           cout<<t1;
           if (i!=N)
           cout<<" ";
           n=t1 + t2;
           t1 = t2;
           t2 =n;
        }
    }
   cout<<"\n";

    return 0;

}
