#I am here creting different combinations for the given list using brute force and dynamic programming

class Solution:
    def permuteUnique(self, nums):
        # iterative solution
        res = [[]]
        for i in range(len(nums)):
            cache = set()
            while len(res[0]) == i:
                curr = res.pop(0)
                for j in range(len(curr) + 1):
                    # generate new n permutations from n -1 permutations
                    new_perm = curr[:j] + [nums[i]] + curr[j:]
                    stemp = ''.join(map(str, new_perm))
                    if stemp not in cache:
                        cache.add(stemp)
                        res.append(new_perm)
        return res
        
