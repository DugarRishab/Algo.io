#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int n = nums.size();
		int flag = 0;

		for(int i=0; i<n; i++){
			if(nums[i] == val){
				flag++;
			}
			else{
				nums[i - flag] = nums[i];
			}
			
		}

		return n - flag - 1;
	}
};