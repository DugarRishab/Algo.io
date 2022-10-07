#I am using Brute Force MEthod
#If number of Rows in 1 then there will be no pattern and it will return the string as it is
#if the number of rows is more than 1 , it will make a new lit and append the characters at the required indexes and return the correct list as string

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



