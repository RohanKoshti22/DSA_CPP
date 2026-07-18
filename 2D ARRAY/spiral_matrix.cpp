#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;

    int m = matrix.size();
    int n = matrix[0].size();

    int rowBegin = 0;
    int rowEnd = m - 1;
    int colBegin = 0;
    int colEnd = n - 1;

    while (rowBegin <= rowEnd && colBegin <= colEnd) {

        // Traverse Right
        for (int j = colBegin; j <= colEnd; j++) {
            ans.push_back(matrix[rowBegin][j]);
        }
        rowBegin++;

        // Traverse Down
        for (int j = rowBegin; j <= rowEnd; j++) {
            ans.push_back(matrix[j][colEnd]);
        }
        colEnd--;

        // Traverse Left
        if (rowBegin <= rowEnd) {
            for (int j = colEnd; j >= colBegin; j--) {
                ans.push_back(matrix[rowEnd][j]);
            }
            rowEnd--;
        }

        // Traverse Up
        if (colBegin <= colEnd) {
            for (int j = rowEnd; j >= rowBegin; j--) {
                ans.push_back(matrix[j][colBegin]);
            }
            colBegin++;
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };

    vector<int> ans = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}