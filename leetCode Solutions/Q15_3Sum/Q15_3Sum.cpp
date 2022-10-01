#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<vector<int>> threeSum(vector<int> &nums)
	{
		int i = 0, j = nums.size() - 1, num, k, flag = 0;
		int n = nums.size();
		vector<vector<int>> result;
		
		sort(nums.begin(), nums.end());
		

		for (int i = 0; i < n - 1; i++)
		{
			if((i>0 && nums[i] == nums[i-1])){
				continue;
			}
			j = i + 1;
			k = n - 1;

			while(j < k){
				int sum = nums[i] + nums[j] + nums[k];
				if(sum < 0){
					j++;
				}
				else if(sum > 0){
					k--;
				}
				else if(sum == 0){
					result.push_back({nums[i], nums[j], nums[k]});
					j++;
					k--;
					while(nums[j] == nums[j-1] && j < k){
						j++;
					}
				}
			}
		}

		return result;
	}
};