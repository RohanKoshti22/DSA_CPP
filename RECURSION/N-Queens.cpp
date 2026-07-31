#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Check if it is safe to place a queen
bool isSafe(vector<string> &board, int row, int col, int n)
{
    // Check column
    for (int i = row - 1; i >= 0; i--)
    {
        if (board[i][col] == 'Q')
            return false;
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

// Backtracking
bool nQueens(vector<string> &board, int row, int n)
{
    // Base Case
    if (row == n)
    {
        return true;
    }

    // Try every column
    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col, n))
        {
            // Place Queen
            board[row][col] = 'Q';

            // Recursive Call
            if (nQueens(board, row + 1, n))
            {
                return true;
            }

            // Backtrack
            board[row][col] = '.';
        }
    }

    return false;
}

int main()
{
    int n = 4;

    vector<string> board(n, string(n, '.'));

    if (nQueens(board, 0, n))
    {
        cout << "One Solution:\n\n";

        for (string row : board)
        {
            cout << row << endl;
        }
    }
    else
    {
        cout << "No Solution Exists";
    }

    return 0;
}