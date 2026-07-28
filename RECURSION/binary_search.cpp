#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(vector<int> nums , int start ,int end, int target){
    if(start > end){
        return -1;
    }

    int mid = start + (end- start)/2;

    if(nums[mid] == target){
        return mid;
    }
    if(nums[mid] < target){
        return binarySearch(nums , mid+1,end,target);
    }
    return binarySearch(nums,start,mid-1,target);
}
int main(){
    vector<int> nums= {2,4,6,8,9,10,11,22 };
    int target = 10;

    int index = binarySearch(nums,0,nums.size()- 1,target);
if(index != -1){
    cout <<"element found"<<endl;

}else{
    cout << "not found"<<endl;
}

    return 0;
}