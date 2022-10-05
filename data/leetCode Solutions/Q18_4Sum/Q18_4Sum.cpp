#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<vector<int>> fourSum(vector<int> &nums, int target)
	{
		int i = 0, j = nums.size() - 1, num, k, l, flag = 0, resultFound = 0;
		int n = nums.size();
		vector<vector<int>> result;

		sort(nums.begin(), nums.end());

		if (n < 4)
		{
			return {};
		}

		for (int i = 0; i < nums.size() - 2; i++)
		{
			while (i > 0 && nums[i] == nums[i - 1] && i < nums.size() - 2)
			{
				i++;
			}
			for (int j = i + 1; j < nums.size() - 1; j++)
			{
				k = j + 1;
				l = nums.size() - 1;

				while (j > i + 1 && nums[j] == nums[j - 1] && k < l)
				{
					j++;
					k = j + 1;
				}

				while (k < l)
				{
					long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l];

					if (sum == target)
					{
						result.push_back({nums[i], nums[j], nums[k], nums[l]});
						k++;
						l--;
						while (nums[k] == nums[k - 1] && k < l)
						{
							k++;
						}
					}
					else if (sum > target)
					{
						l--;
					}
					else
					{
						k++;
						while (nums[k] == nums[k - 1] && k < l)
						{
							k++;
						}
					}
				}
			}
		}

		return result;
	}
};