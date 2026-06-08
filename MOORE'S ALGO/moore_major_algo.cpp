#include<iostream>
#include<vector>
using namespace std;

int majorMoore(vector<int>& nums){
    int n = nums.size();
    int freq = 0 ;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if(freq == 0){
            ans = nums[i];

        }
        if (nums[i] == ans)     
        {
            freq++;
        }else{
            freq--;
        }
        
    }return ans;
    
}
int main(){
    vector<int> nums = {2,2,1,1,2,2};

    cout<<majorMoore(nums);
    return 0;
}