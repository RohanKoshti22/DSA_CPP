#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size = 6;
    int nums[] = {1,4,9,7,5,0};

    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (
            nums[i] > largest
        )
        {
            largest = nums[i];
        }
        // OR
        // largest = max(nums[i], largest);
    }
    cout<<largest<<endl;
    return 0;
}