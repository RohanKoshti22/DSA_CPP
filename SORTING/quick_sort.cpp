#include<iostream>
#include<vector>
using namespace std;
int findPartition(vector<int> &arr, int st,int end ){
    int pivot = arr[end];

    int i = st - 1;

    for (int j = st; j < end; j++)
    {
        if(arr[j] <= pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
        
        
    }
    swap(arr[i+1], arr[end]);
    return i+1;
    
}
void quickSort(vector<int>&arr , int st ,int end){
    
    if(st < end){
            int partition = findPartition(arr,st,end);
            quickSort(arr,st,partition - 1);
            quickSort(arr,partition + 1,end);

        }
    }

int main(){
    vector<int> arr = {12,32,43,9,2,4,21,8};
quickSort(arr,0 ,arr.size()- 1);

for(int x : arr){
    cout << x << endl;

}

    return 0;
}