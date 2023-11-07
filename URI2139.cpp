#include <iostream>
using namespace std;

int main()
{
    int month, day, x, i;
    int ara[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

    while(cin>>month>>day)
    {
        if(month == 12 && day == 25)
        {
            cout<<"E natal!\n";
        }

        else if(month == 12 && day > 25)
        {
          cout<<"Ja passou!\n";
        }

        else if(month == 12 && day == 24)
        {
             cout<<"E vespera de natal!\n";
        }

        else
        {
            x = ara[month-1] - day;
            for(i = month; i < 12; i++)
                x += ara[i];
            cout<<"Faltam "<<x<<" dias para o natal!\n";
        }
    }
    return 0;
}

