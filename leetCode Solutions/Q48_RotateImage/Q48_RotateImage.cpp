#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Input of Matrix
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        // Taken Transpose of Matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reverse the Matrix
        for (int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        // Print the Matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        // Return the Function
        return;
    }
};