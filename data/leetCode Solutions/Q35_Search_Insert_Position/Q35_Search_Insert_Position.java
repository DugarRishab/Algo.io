

// We'll first apply the binary search algorithm on the given sorted array.
// If the target value is found, we'll return that index.
// If not, we'll process until our search space becomes empty. At this point, the index at which the element should be inserted is already saved while we dive our search space by half.



class Solution {
    public int searchInsert(int[] nums, int target) {
        
        int s = 0;
        int e = nums.length -1;
        
        while(s<=e){
            int m = (s+e)>>1;
            if(target == nums[m]){
                return m;
            }
            if(target<nums[m]){
                e = m-1;
            }else{
                s = m + 1;
            }
        }
        
        return s;
    }
}