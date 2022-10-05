#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		vector<int> map(500, -1);

		int i = 0, j = 0, max = 0, longest = 0, flag=-1, num;
		
		while(i<s.length()){

			num = s[i];

			if(map[num] >= 0){
				i = map[num] + 1;
				fill(map.begin(), map.end(), -1);
				j = i;
				longest = 0;
				//cout << true;
			}
			else{
				map[num] = i;
				i++;
				longest++;
				if(longest > max){
					max = longest;
				}
				//cout << false;
			}
		}
		return max;
	}
};