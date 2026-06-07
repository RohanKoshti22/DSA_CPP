#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    int currSum = 0;
    int maxSum = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];

        maxSum = max(currSum,maxSum);

        if (currSum < 0 )
        {
            currSum = 0;
        }
        
    }
    cout << "Max sum is" << maxSum<<endl;
    return 0;
}