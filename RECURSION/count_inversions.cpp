#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int st, int end, int mid)
{
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    int invCount = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);

            invCount += (mid - i + 1);

            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st + idx] = temp[idx];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        int leftInv = mergeSort(arr, st, mid);

        int rightInv = mergeSort(arr, mid + 1, end);

        int invCount = merge(arr, st, end, mid);

        return leftInv + rightInv + invCount;
    }

    return 0;
}

int main()
{
    vector<int> arr = {2, 4, 1, 3, 5};

    int ans = mergeSort(arr, 0, arr.size() - 1);

    cout << "Inversion Count = " << ans << endl;

    cout << "Sorted Array: ";

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}