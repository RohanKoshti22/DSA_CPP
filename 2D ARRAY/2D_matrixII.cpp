#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool searchTarget(vector<vector<int>> matrix, int target ){
    int m = matrix.size() , n = matrix[0].size();
    int r = 0 , c = n-1;

    while ( c >= 0 && r < m){
if(target == matrix[r][c]){
    return true;
}else if (target < matrix[r][c]){
    c--;
}else{
    r++;
}
    }
    return false;
}
int main(){
    vector<vector<int>> matrix = { {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
};

        int target ;
        cout << "Enter the target";
        cin >> target;

        if(searchTarget(matrix,target)){
            cout << "Found";
        }else{
            cout << "NOt found";
        }
    

    return 0;
}