#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int numMatchingSubseq(string s, vector<string> &words)
	{
		
	}

	int checkPosition(char ch, string str, int p){
		// p -> position after which to start checking

		int position = -1;
		for (int i = p + 1; i < str.size(); i++){
			if(str[i] == ch){
				position = i;
				break;
			}
		}
		return position;
	}
};