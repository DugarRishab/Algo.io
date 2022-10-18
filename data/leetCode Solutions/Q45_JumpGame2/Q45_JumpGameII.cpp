#include <bits/stdc++.h>

using namespace std;

/*  Memoization */
class Solution
{
public:
    int check(vector<int> &nums, vector<int> &dp, int ind)
    {
        // base conditions to stop
        if (ind == nums.size() - 1)
        {
            return dp[ind] = 0;
        }
        if (ind >= nums.size())
        {
            return INT_MAX - ind;
        }
        if (nums[ind] == 0)
            return INT_MAX - ind;

        if (dp[ind] != -1)
            return dp[ind];

        // similar to jump game but here minimum steps is to be found and for thar all permissible jumps
        // are checked out for every node and minimum elements are selected.
        int minm = INT_MAX;
        for (int j = 1; j <= nums[ind]; j++)
        {
            int ans = check(nums, dp, ind + j);
            minm = min(minm, ans + 1);
        }
        return dp[ind] = minm;
    }

    int jump(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, -1);

        return check(nums, dp, 0);
    }
};

/* Tabulation  */

int jump(vector<int> &nums)
{

    int n = nums.size();
    vector<int> dp(n);
    dp[0] = 0;

    return check(nums, dp, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= nums[i]; j++)
        {
            // minimum steps are checked.
            if (i + j < n)
                dp[i + j] = min(dp[i + j], dp[i] + 1);
        }
    }
    return dp[n - 1];
}