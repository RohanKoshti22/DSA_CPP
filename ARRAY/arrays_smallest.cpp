#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size = 6;
    int nums[] = {7,2,0,9,5,3};

    int smallest = INT_MAX;

    for (int  i = 0; i < size; i++)
    {
        if (nums[i]<smallest)
        {
            smallest = nums[i];
        }
        
        //OR
        
        // smallest = min(nums[i], smallest);
    }
    cout <<smallest<<endl;
    return 0;
}