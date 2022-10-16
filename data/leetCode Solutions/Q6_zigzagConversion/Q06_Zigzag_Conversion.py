#Here I am using Brute force approach including dynamic programming
#If the number of rows in pattern is given 1 then it means that the string itself is correct and now the further pattern is needed to be resolved
#if the number of rows is not equal to one and greater than 1 then we are resolving the pattern using brute force and it will make a new list and append the characters at the required indexes and return the correct list as a string

class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        # calculate period
        p = 2 * (numRows - 1)
        result = [""] * numRows
        for i in range(len(s)):
            floor = i % p
            if floor >= p//2:
                floor = p - floor
            result[floor] += s[i]
        return "".join(result)


