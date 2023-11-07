#include<iostream>
using namespace std;
int main()
 {
    int N, n1,temp,n2,temp1,n3,n4,n5,n6,n7,temp2,temp3,temp4,temp5,temp6;
    cin>>N;
    n1 = N / 100;
    temp = N % 100;
    n2 = temp/50;
    temp1= temp % 50;
    n3 = temp1/20;
    temp2 = temp1 % 20;
    n4 = temp2/10;
    temp3 = temp2 % 10;
    n5 = temp3/5;
    temp4 = temp3 % 5;
    n6 = temp4/2;
    temp5 = temp4%2;
    n7 = temp5/1;

    cout<<N<<"\n";
    cout<<n1<<" nota(s) de R$ 100,00\n";
    cout<<n2<<" nota(s) de R$ 50,00\n";
    cout<<n3<<" nota(s) de R$ 20,00\n";
    cout<<n4<<" nota(s) de R$ 10,00\n";
    cout<<n5<<" nota(s) de R$ 5,00\n";
    cout<<n6<<" nota(s) de R$ 2,00\n";
    cout<<n7<<" nota(s) de R$ 1,00\n";
    return 0;
 }






