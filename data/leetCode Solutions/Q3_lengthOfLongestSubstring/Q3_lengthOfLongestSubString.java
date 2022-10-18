package data.leetCode Solutions.Q3_lengthOfLongestSubstring;

/*
    Approach: 
    We will have two pointers l & r. Pointer ‘l’ maintains the  starting point of substring and 
    ‘r’ maintains the endpoint of the substring.’ 
    r pointer will move forward and check for the duplicate occurrence of the current element if found 
    then l pointer moves head to delete the duplicate elements.
*/
public class Q3_lengthOfLongestSubString {
    
    public int lengthOfLongestSubstring(String str) {
        if(str.length()==0)
             return 0;
        int maxans = Integer.MIN_VALUE;
        Set < Character > set = new HashSet < > ();
        int l = 0;
        for (int r = 0; r < str.length(); r++) // outer loop for traversing the string
        {
            if (set.contains(str.charAt(r))) //if duplicate element is found
            {
                while (l < r && set.contains(str.charAt(r))) {
                    set.remove(str.charAt(l));
                    l++;
                }
            }
            set.add(str.charAt(r));
            maxans = Math.max(maxans, r - l + 1);
        }
        return maxans;
    }
}
