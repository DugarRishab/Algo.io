#include <bits/stdc++.h>
using namespace std;

// recursion, hash map

class Solution
{
public:
	vector<string> letterCombinations(string digits)
	{
		int length = digits.length();
		string newDigit = digits;
		newDigit.pop_back();

		map<char, vector<string>> pattern;
		pattern.insert(pair<char, vector<string>>('2', {"a", "b", "c"}));
		pattern.insert(pair<char, vector<string>>('3', {"d", "e", "f"}));
		pattern.insert(pair<char, vector<string>>('4', {"g", "h", "i"}));
		pattern.insert(pair<char, vector<string>>('5', {"j", "k", "l"}));
		pattern.insert(pair<char, vector<string>>('6', {"m", "n", "o"}));
		pattern.insert(pair<char, vector<string>>('7', {"p", "q", "r", "s"}));
		pattern.insert(pair<char, vector<string>>('8', {"t", "u", "v"}));
		pattern.insert(pair<char, vector<string>>('9', {"w", "x", "y", "z"}));

		vector<string> result;

		if (length > 1)
		{
			auto res = letterCombinations(newDigit);

			char lastEL = digits[length - 1];

			for (int i = 0; i < pattern[lastEL].size(); i++)
			{
				for (int j = 0; j < res.size(); j++)
				{
					result.push_back(res[j] + pattern[lastEL][i]);
				}
			}
		}
		else
		{
			result = pattern[digits[0]];
		}

		return result;
	}
};