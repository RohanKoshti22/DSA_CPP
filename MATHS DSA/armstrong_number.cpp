#include <iostream>
#include <cmath>
using namespace std;
bool armstrong(int n)
{
    
    int copyN = n;
    int sum = 0;
    int digits = 0;
    while (copyN != 0)
    {
        digits++;
        copyN /= 10;
    }
    copyN = n;

    while (n != 0)
    {
        int dig = n % 10;
        sum += pow(dig, digits);
        n = n / 10;
    }
    return sum == copyN;
}
int main()
{
    int n ;
    cout << "Enter number :";
    cin >> n;

    if(armstrong(n)){
        cout << "Armstrong";

    }else{
        cout << "Not Armstrong";
    }
    return 0;
}