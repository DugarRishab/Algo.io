#include <bits/stdc++.h>

using namespace std;

/*
    Explanation: Apply for loop at the 4 edges of grid/matrix and corresponding to that assign the values
     to given 2D array after visiting that particular node and move to next value and keep updating the
     index values. and assign elements corresponding to those positions.
*/

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {

        vector<vector<int>> v(n, vector<int>(n, 0));

        int count = 1;
        int i = 0, j = 0;

        while (count <= pow(n, 2))
        {
            while (j < n && v[i][j] == 0)
            {
                v[i][j] = count;
                count++;
                j++;
            }
            j--;
            i++;
            while (i < n && v[i][j] == 0)
            {
                v[i][j] = count;
                count++;
                i++;
            }
            i--;
            j--;
            while (j >= 0 && v[i][j] == 0)
            {
                v[i][j] = count;
                count++;
                j--;
            }
            j++;
            i--;
            while (i >= 0 && v[i][j] == 0)
            {
                v[i][j] = count;
                count++;
                i--;
            }
            i++;
            j++;
        }

        return v;
    }
};