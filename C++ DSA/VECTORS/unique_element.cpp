#include<iostream>
#include<vector>
using namespace std;

int main(){
    int sum = 0;
    vector<int>vec = {1,2,2,3,1};
    for (int val : vec){
        sum = sum ^ val;
    }
    cout<<sum<<endl;
    return 0;
}