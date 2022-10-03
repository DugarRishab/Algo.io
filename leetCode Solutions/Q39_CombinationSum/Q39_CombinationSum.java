/* This solution uses the concept of recursion by considering both the cases of idea of picking or not picking an element in the array to find the target sum */

class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<>();
        findCombination(0,candidates,result, new ArrayList<>(), target);
        return result;
    }
    public void findCombination(int i, int arr[],List<List<Integer>> result, ArrayList<Integer> al,int target)     {
        if(i== arr.length){
            if(target == 0) result.add(new ArrayList<>(al));
            return;
        }
        if(arr[i]<=target){     
            //pick single element multiple times
            al.add(arr[i]);     
            //we are not changing index i, because we are picking same element multiple times
            findCombination(i,arr,result,al, target-arr[i]);
            al.remove(al.size()-1);
        }
		    //moving to next index and start again with pick/not-pick principle
        findCombination(i+1,arr,result, al, target);
  }
}
