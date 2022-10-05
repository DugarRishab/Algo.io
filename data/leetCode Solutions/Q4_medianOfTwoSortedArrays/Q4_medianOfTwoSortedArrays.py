class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = nums1 + nums2 
        nums.sort()
        return nums[(len(nums) // 2)] if len(nums) % 2 != 0 else (nums[(len(nums) // 2) - 1] + nums[len(nums) // 2]) / 2
    