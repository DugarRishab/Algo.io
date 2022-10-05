class Solution:
    def myPow(self, x: float, n: int) -> float:
        neg=False
        if n<0:
            neg=True
            n=abs(n)
        ans=1
        
        while(n>0):
            if n%2!=0:
                ans=ans*x
                n-=1
            else:
                x=x*x
                n//=2
        if neg:
            return 1/ans
        return ans
