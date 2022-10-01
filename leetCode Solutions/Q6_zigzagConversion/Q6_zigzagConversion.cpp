#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	string convert(string s, int numRows)
	{
		int n = s.length();
		string result;
		int j = 0, k=0;
		int gap = 2 * numRows - 3;
		if(gap < 0)
			gap = 0;
		int x = gap;

		for (int i = 0; i < n; i++)
		{
			k = 0;
			if(x >= 1){
				if (i == 0)
				{
					while (k < n && j < n)
					{
						result.push_back(s[k]);
						j++;
						k += gap + 1;
					}
				}
				else
				{
					while (j < n)
					{
						if (k != 0 && k-i < n)
						{
							result.push_back(s[k - i]);
							j++;
						}

						if (k + i < n)
						{
							result.push_back(s[k + i]);
							j++;
						}
						else{
							break;
						}
						k += gap + 1;
					}
				}
				x = x - 2;
			}
			else{
				if (i == 0)
				{
					while (k < n && j < n)
					{
						result.push_back(s[k]);
						j++;
						k += gap + 1;
					}
				}
				else
				{
					while (j < n)
					{
						if (k + i < n)
						{
							result.push_back(s[k + i]);
							j++;
						}
						else{
							break;
						}
						k += gap + 1;
					}
				}
				break;
			}
			
		}
		return result;
	}
};