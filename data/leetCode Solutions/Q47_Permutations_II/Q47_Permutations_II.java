class Solution {
    
    public void helper(int posi, int n, int[] nums, List<List<Integer>> ans){
        
        if(posi>=n){
        List<Integer> permutations= convertToArray(nums);
        ans.add(new ArrayList(permutations));
        return;
        }
        
        HashSet<Integer> set= new HashSet<>();
        
        for(int i=posi; i<n; i++){
            if(set.contains(nums[i]))
            continue;
            set.add(nums[i]);
            swap(posi,i,nums);
            helper(posi+1,n, nums,ans);
            swap(posi,i,nums);
        }
        return;
    }
    
    
    public void swap(int i, int j, int[] nums){
        int temp= nums[i];
        nums[i]=nums[j];
        nums[j]= temp;
    }
    
    public List<Integer> convertToArray(int[] nums){
        List<Integer> ans= new ArrayList<>();
        for(int ele:nums){
            ans.add(ele);
        }
        return ans;
    }
    
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> ans= new ArrayList<>();
        helper(0, nums.length, nums, ans);
        return ans;
    }
}