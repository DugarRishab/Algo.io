class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        results = []
        
        def numberMapper(nums):
            storage = {}
            for num in nums:
                if num in storage:
                    storage[num] += 1
                else:
                    storage[num] = 1
            return storage

        
        def backtrack(state):
            if len(nums) == len(state):
                results.append(state[:])
                return
            
            for num in storage:
                if storage[num] > 0:
                    state.append(num)
                    storage[num] -= 1
                    backtrack(state)
                    storage[num] += 1
                    state.pop()
                    
        storage = numberMapper(nums)
        backtrack([])
        return results
        