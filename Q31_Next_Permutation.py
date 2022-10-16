# 1. Search from right to left for a point where the values stop ascending, that will be the point that must be updated.
# 2. Locate the point furthest right of this point that has a greater value than our destination point found in 1.
# 3. Swap the points found in 1. and 2 and reverse everything to the right of destination found in 1. as it is currently decending left to right and must be ascending.

# Link to the problem statement: https://leetcode.com/problems/next-permutation/
# leetcode: 31
# Next permutation
class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        for i in range(n-2,-1,-1):
            if nums[i]<nums[i+1]:
                nums[i+1:] = nums[-1:i:-1]
                for j in range(i+1,n):
                    if nums[j]>nums[i]:
                        nums[i],nums[j] = nums[j],nums[i]
                        return
        nums[:] = nums[::-1]
        return

#  Complexity: time complexity it is O(n), where n is length of nums. Space complexity is O(1) here, because we do everything in-place.       