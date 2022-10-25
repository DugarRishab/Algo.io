// Use the sort function and a single loop to solve the problem

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        // sort the given 2-D vector
        sort(intervals.begin(), intervals.end());
        
        vector<int> compare = intervals[0];
        
        for(int i=1; i<intervals.size(); i++){
            
            if(intervals[i][0] <= compare[1]){
                // this condition is used to tackle overlapped interval
                compare[1] = max(intervals[i][1], compare[1]);
            }
            else{
                // this is for non-overlapping intervals
                ans.push_back(compare);
                compare = intervals[i];
            }
            
        }
        
        ans.push_back(compare);
        return ans;
    }
};