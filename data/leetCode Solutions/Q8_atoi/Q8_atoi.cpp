#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int myAtoi(string s)
	{
		int n = s.length();
		int sign = 1;
		int start = 0;
		int maxInt = 0;
		int result = 0;

		for (int i = 0; i < n; i++)
		{
			if ((int)s[i] == 32)
			{

				if (start == 1)
				{
					// non-numeric char was found after numbers started
					break;
				}
				// else ignore ;
			}
			else if ((int)s[i] == 43 || (int)s[i] == 45)
			{
				if(start == 1){
					break;
					// non-numeric found after sign
				}
				// signStart = 1;
				start = 1;
				sign = 44 - (int)s[i];
			}
			else if ((int)s[i] >= 48 && (int)s[i] <= 57){
				start = 1;
				if (result <= (INT_MAX - (int)s[i] + 48)/10)
				{
					result = result * 10 -48 + (int)s[i];
				}
				else{
					maxInt = 1;
					if(sign < 0){
						result = INT_MIN;
						break;
					}
					else{
						result = INT_MAX;
						break;
					}
				}
			}
			else{
				break;
			}
		}

		if(sign < 0 && maxInt == 0){
			result *= -1;
		}

		return result;
	}
};