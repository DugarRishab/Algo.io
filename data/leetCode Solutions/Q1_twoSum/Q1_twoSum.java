import java.util.HashMap;

public class Q1_twoSum {
    public int[] twoSum(int[] nums, int target) {
        int [] ans = new int[2];

        for(int i=0;i<nums.length-1;i++){
            for(int j=i+1;j<nums.length;j++){

                int tempsum = nums[i] + nums[j];

                if(tempsum == target){
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        }
        return ans;
    }
}
