#include <bits/stdc++.h>

using namespace std;

/*
    Explanation: take visited bool type array of size same as given grid/matrix and then apply
    for loop at the 4 edges of grid/matrix and corresponding to that after visiting that particular
     node just mark it as visited so we can not go for it again and again the same happens for the
     elements present in the inner part of grid/matrix.
*/
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v;

        vector<vector<bool>> vis(m, vector<bool>(n, false));

        int i = 0, j = 0;
        while (1)
        {
            while (j < n && !vis[i][j])
            {
                v.push_back(matrix[i][j]);
                vis[i][j] = true;
                j++;
            }
            j--;
            i++;
            while (i < m && !vis[i][j])
            {
                v.push_back(matrix[i][j]);
                vis[i][j] = true;
                i++;
            }
            i--;
            j--;
            while (j >= 0 && !vis[i][j])
            {
                v.push_back(matrix[i][j]);
                vis[i][j] = true;
                j--;
            }
            j++;
            i--;
            while (i >= 0 && !vis[i][j])
            {
                v.push_back(matrix[i][j]);
                vis[i][j] = true;
                i--;
            }
            i++;
            j++;

            if (vis[i][j])
                break;
        }

        return v;
    }
};

/*
    Tabulation Approach
*/

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, false);

    dp[n - 1] = true;
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= nums[i]; j++)
        {
            if (i + j < n && dp[i + j])
            {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[0];
}