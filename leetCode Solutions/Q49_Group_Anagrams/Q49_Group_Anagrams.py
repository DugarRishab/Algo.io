class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        def char_tracker(word):
            ans = [0] * 26
            for char in word:
                ans[ord(char) - ord('a')] += 1
            return ans
        
        def hash_word(word):
            ans = ""
            for index, value in enumerate(char_tracker(word)):
                if value > 0:
                    char = chr(ord('a') + index)
                    ans += f"{value}{char}"
            return ans
        
        storage = {}
        
        for word in strs:
            hashed_word = hash_word(word)
            storage[hashed_word] = storage.get(hashed_word, []) + [word]
            
        return storage.values()