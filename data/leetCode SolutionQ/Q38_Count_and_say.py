class Solution:
    def countAndSay(self, n):
        if n == 1:
            return '1'
        y = '1'
        while n > 1:
            # each round, read itself
            y = self.count(y)
            n -= 1
        return y

    def count(self, y):
        m = list(y)
        result = []
        m.append(None)
        i , j = 0 , 0
        while i < len(m) - 1:
            j += 1
            if m[j] != m[i]:
                # note j - i is the count of m[i]
                result += [j - i, m[i]]
                i = j
        return ''.join(str(s) for s in result
