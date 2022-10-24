#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int length = nums.size();
        vector<int> res(length);
        res[0] = nums[0];
        for(int i = 1; i < length; i++)
            res[i] = nums[i] + res[i - 1];
        return res;
    }
};
