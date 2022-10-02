/*
As the array is sorted but rotated, so we figure out
which half of array is sorted, once we know which half of the array is
sorted, we perform a binary search to search for the target.

Complexity Analysis
TC(Time Complexity): O(log(N))  //Binary Search
SC(Space Complexity): O(1)   //Constant Extra Space Used
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            //Checking if Left half is sorted
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target&&nums[mid]>target)
                    high=mid-1;
                else
                    low=mid+1;
            }
            //Checking if Right half is sorted
            else
            {
                if(nums[high]>=target&&nums[mid]<target)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;  //if target not found
    }
};
