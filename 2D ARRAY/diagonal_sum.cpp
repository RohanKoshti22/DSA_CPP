#include <iostream>
using namespace std;

int DiaSum(int matrix[][4], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        ans += matrix[i][i];

        if (i != n - 1 - i)
        {
            ans += matrix[i][n -1 -i];
        }
    }
    return ans;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4;

    cout << DiaSum(matrix, n);
    return 0;
}