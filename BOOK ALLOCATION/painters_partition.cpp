#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painters = 1, time = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > maxAllowedTime)
        {
            return false;
        }

        if(time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }

    return painters > m ? false : true;
}

int painterPartition(vector<int> &arr, int n, int m)
{
    if(m > n)
    {
        return -1;
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};

    int n = arr.size();
    int m = 2;

    cout << painterPartition(arr, n, m) << endl;

    return 0;
}