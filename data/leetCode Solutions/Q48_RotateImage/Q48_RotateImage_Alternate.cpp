#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int m, n;

        m = matrix.size();
        n = matrix[0].size();

        int temp;

        // finding the Transpose of matrix.
        for (int i = 0; i < m / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                swap(matrix[i][j], matrix[m - i - 1][j]);
            }
        }

        // After finding Transpose now to get the rotated matrix we are swapping the element at
        //{i,j} with element at {j,i} as it will give the rotated matrix.
        for (int i = 0; i < m; i++)
        {
            for (int j = i; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};