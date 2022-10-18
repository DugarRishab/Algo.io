
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {

        if (x == 0)
            return 0.0;
        if (x == 1)
            return 1.0;
        double ans = 1.0;
        long long int x_n = abs(n);
        while (x_n)
        {
            // when x_n is even then multiply ans with x;
            if (x_n % 2)
            {
                ans *= x;
                x_n--;
            }
            // if x is odd then no need to update ans and only multiply x with itself.
            else
            {
                x = x * x;
                x_n = x_n / 2;
            }
        }
        if (n < 0)
        {
            ans = (double)1 / (double)ans;
        }

        return ans;
    }
};