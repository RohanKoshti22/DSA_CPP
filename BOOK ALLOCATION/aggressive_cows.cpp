#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> &arr, int n, int cow, int minAllowedDistance)
{
    int cows = 1;
    int lastStallPos = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] - lastStallPos >= minAllowedDistance)
        {
            cows++;
            lastStallPos = arr[i];
        }
    }

    return cows >= cow;
}

int aggressiveCows(vector<int> &arr, int n, int cow)
{
    sort(arr.begin(), arr.end());

    int ans = -1;

    int st = 1;
    int end = arr[n - 1] - arr[0];

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(isValid(arr, n, cow, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1,2,8,4,9};

    int n = arr.size();
    int cow = 3;

    cout << aggressiveCows(arr, n, cow) << endl;

    return 0;
}