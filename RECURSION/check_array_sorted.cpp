#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSorted(vector<int> & nums, int index){
    if(index  == nums.size() - 1){
        return true;
    }

    if(nums[index ]> nums[index + 1]){
        return false;
    }

    return isSorted(nums, index+1);

}
int main(){
    vector<int> nums = {1,2,7,4,5};
    int index =  0 ;

    if(isSorted(nums,index)){
        cout <<"sorted";
    }else{
        cout << "Not Sorted";
    }
    return 0;
}