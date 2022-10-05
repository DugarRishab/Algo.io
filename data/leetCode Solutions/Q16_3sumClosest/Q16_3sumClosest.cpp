#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int threeSumClosest(vector<int>& nums, int target)
	{
		int i = 0, j = nums.size() - 1, num, k, minDiff, diff, flag = 0;
		int n = nums.size();
		vector<int> result;
		
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
				if(sum < target){
					diff = target - sum;
					if(flag == 0){
						minDiff = diff;
						result = {nums[i], nums[j], nums[k]};
					}
					else if(minDiff > diff){
						minDiff = diff;
						result = {nums[i], nums[j], nums[k]};
					}
					j++;
					
				}
				else if(sum > target){
					diff = sum - target;
					if(flag == 0){
						minDiff = diff;
						result = {nums[i], nums[j], nums[k]};
					}
					else if(minDiff > diff){
						minDiff = diff;
						result = {nums[i], nums[j], nums[k]};
					}
					
					k--;
					
				}
				else if(sum == target){
					diff = 0;
					minDiff = diff;
					result = {nums[i], nums[j], nums[k]};
					
					break;
				}
				flag++;
			}

			if(minDiff == 0){
				break;
			}
		}

		return result[0] + result[1] + result[2];
	}
};