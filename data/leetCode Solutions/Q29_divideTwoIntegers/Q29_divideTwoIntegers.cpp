// using logs -> formula : a/b = e ln(a) / e ln(b) = e( ln(a) – ln(b) ). 
// adding 0.0000000001 to compensate for errors


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   
 long long divide(long long dividend, long long divisor) {
        
        // edge cases
        if (dividend == 0 || divisor == 0) return 0;
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
     
        // finding out sign of answer
		bool sign = (dividend>=0) == (divisor>=0) ? true : false;
     
        //getting absolute value
		long long div = abs(dividend);
		long long divsr = abs(divisor);
        
        // using the formula
		long long ans = exp(log(div) - log(divsr)+ 0.0000000001);
    
		return sign ? ans : -ans;
	}
};
