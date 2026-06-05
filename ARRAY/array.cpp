#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int marks[size];

    for (int i = 0; i <= 4; i++)
    {
        cin >> marks[i] ;
    }


    for (int i = 0; i <= 4; i++)
    {
        cout << marks[i]
             << endl;
    }
    return 0;
}