#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<int> findSubstring(string s, vector<string> &words)
	{
		int n = words.size();
		int wordLength = words[0].length();

		if(s.length() < wordLength * n){
			return {};
		}

		map<char, set<int>> mapOfS;

		for (int i = 0; i < s.length(); i++)
		{
			mapOfS[s[i]].insert(i);
		}

		// map<string, vector<int, int>> position;
		vector<int> pos;
		
		for (int i = 0; i < n; i++){
			string word = words[i];
			// auto p = mapOfS[word[0]];
			for (int j = 0; j < s.length() - wordLength; j++){
				if(s.substr(j, wordLength) == word){
					pos.push_back(j);
					pos.push_back(j + wordLength);
				}
			}
		}
		vector<int> result;

		if(max_element(pos.begin(), pos.end()) - min_element(pos.begin(), pos.end()) > wordLength * n){
			return {};
		}
		for (int i = 0; i < pos.size(); i+=2){
			cout << "pos" << pos[i];
			if (wordLength * n - pos[i] > (max_element(pos.begin(), pos.end()) - pos.begin()))
			{
				result.push_back(pos[i]);
			}
		}

		return result;
	}
};