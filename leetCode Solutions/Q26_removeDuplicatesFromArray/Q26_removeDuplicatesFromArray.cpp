#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		int n = nums.size();
		int flag = 0;

		for(int i=1; i<n; i++){
			if(nums[i] == nums[i-1]){
				flag++;
			}
			if(flag > 0){
				nums[i - flag] = nums[i];
			}
			
		}

		return n - flag - 1;
	}
};