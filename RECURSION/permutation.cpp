#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums,
           vector<int>& ans,
           vector<bool>& used,
           vector<vector<int>>& result)
{
    // Base Case
    if (ans.size() == nums.size())
    {
        result.push_back(ans);
        return;
    }

    // Try every number
    for (int i = 0; i < nums.size(); i++)
    {
        if (used[i])
            continue;

        // Choose
        used[i] = true;
        ans.push_back(nums[i]);

        // Explore
        solve(nums, ans, used, result);

        // Backtrack
        ans.pop_back();
        used[i] = false;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result;
    vector<int> ans;
    vector<bool> used(nums.size(), false);

    solve(nums, ans, used, result);

    cout << "All Permutations:\n";

    for (auto permutation : result)
    {
        cout << "{ ";

        for (int num : permutation)
        {
            cout << num << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}