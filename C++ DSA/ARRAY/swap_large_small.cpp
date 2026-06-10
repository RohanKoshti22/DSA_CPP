#include <iostream>
using namespace std;
int largesmallswap(int arr[], int size)
{
    int smallest = 0;
    int largest = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[smallest])
        {
            smallest = i;
        }
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    swap(arr[smallest], arr[largest]);
}
int main()
{
    int arr[] = {5, 2, 6, 4};
    int size = 4;
    largesmallswap(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}