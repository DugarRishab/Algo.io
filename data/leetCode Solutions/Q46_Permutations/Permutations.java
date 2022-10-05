class Solution {
    public List<List<Integer>> permute(int[] nums) {
       List<List<Integer>> container = new ArrayList<>();
        permute(nums, container, new ArrayList<Integer>(), 0);
        return container;
    }
    public void permute(int[] nums, List<List<Integer>> container, List<Integer> temp, int i) {
        if(i >= nums.length) {
            container.add(new ArrayList<>(temp));
            return;
        }
        
        int n = nums[i];
        
        for (int j = 0; j <= temp.size(); j++) {
            temp.add(j, n);
            permute(nums, container, temp, i + 1);
            temp.remove(j);
        }
    }
}
