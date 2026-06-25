#include<iostream>
using namespace std;

void sortcolors(int arr[],int n){
    int low = 0,mid = 0 ,high = n-1;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;

        }else if(arr[mid] == 1){
            mid++;
        }else {
            swap(arr[high] , arr[mid]);
            high--;
        }
    }
}
int main(){
    int arr[] = {2,0,2,1,1,0};
    int n = 6;

    sortcolors(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<endl;
    }
    
    return 0;
}