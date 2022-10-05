class Solution {
public:
    int jump(vector<int>& nums) {
        // support variables
        int len = nums.size(), steps[len];
        // presetting steps
        for (int i = 1; i < len; i++) {
            steps[i] = INT_MAX;
        }
        steps[0] = 0;
        // populating steps with the lowest possible values
        for (int i = 0; i < len; i++) {
            for (int lmt = i, j = min(len - 1, i + nums[i]); j > lmt; j--) {
                if (steps[j] > steps[i] + 1) steps[j] = steps[i] + 1;
                else break;
            }
        }
        return steps[len - 1];
    }
};