class Solution(object):
    def isPalindrome(self, x):
        #as we have left parameters empty below, End index defaults to the beginning of the             
        # #string and Beginning index defaults to the end of the string, and we move -1 step from              
        # #the back to the front and compare it with x
        
        return False if x < 0 else x == int(str(x)[::-1])