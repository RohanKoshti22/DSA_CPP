#include <iostream>
using namespace std;

void findunique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int arr[] = {1, 3, 2, 5, 4, 7, 9, 2, 3, 3, 2, 4};
    int size = 12;
    findunique( arr, size);
    return 0;
}