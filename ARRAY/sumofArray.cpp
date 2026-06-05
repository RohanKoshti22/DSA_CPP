#include <iostream>
using namespace std;

int sumArr(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << sumArr(arr, size)
    << endl;

    return 0;
}