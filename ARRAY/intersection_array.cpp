#include <iostream>
using namespace std;

void intersectArray(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[i])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 5, 7, 5, 9};
    int arr2[] = {1, 4, 8, 5, 7, 9, 2};

    int size1 = 7;
    int size2 = 7;

    intersectArray(arr1, arr2, size1, size2);

    return 0;
}