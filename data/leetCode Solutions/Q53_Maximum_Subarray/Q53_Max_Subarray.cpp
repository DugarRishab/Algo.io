#include <bits/stdc++.h>

using namespace std;

/*
    Explanation: Kadane's Algo
    if maximum element of array is less than or equal to zero then ans is that element itself;.
    else keep suming up the elements until we either reaches to end of array or sum becomes negative
    & update the maximum value(maxm) corresponding to it.
    return maximum value(maxm) obtained.
 */
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max_el = *max_element(nums.begin(), nums.end());

        if (max_el <= 0)
        {
            return max_el;
        }
        int n = nums.size();
        int sum = 0, maxm = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum > maxm)
            {
                maxm = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxm;
    }
};