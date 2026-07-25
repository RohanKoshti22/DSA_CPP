#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int subSum(vector<int> &nums,int k){
    unordered_map<int,int> m;
m[0]= 1;

int count = 0;
int sum = 0;

for (int i = 0; i < nums.size(); i++)
{
    sum += nums[i];

    if(m.find(sum - k ) != m.end()){

        count += m[sum-k];
    }
  m[sum]++;

}
return count ;

}
int main(){
    vector<int> nums = {1,1,1};

    int k = 2;

cout << subSum(nums,k);
    return 0;
}