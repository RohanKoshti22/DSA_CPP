#include<iostream>
using namespace std;
 int findunique(int arr[], int size ){
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
 }
int main(){
    int arr[] = {1,2,2,4,5,5,4};
    int size = 7;

cout<<findunique(arr,size)<<endl;
    return 0;
}