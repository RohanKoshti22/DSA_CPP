#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int n = nums.size();

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            return nums[i];
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2};

    cout << majorityElement(nums);

    return 0;
}