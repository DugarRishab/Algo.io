#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
		int n = height.size();
		int area, maxArea = 0;
		int i = 0, j = height.size() - 1;

		while(i<j){
			area = (j - i) * min(height[i], height[j]);
			maxArea = max(area, maxArea);

			if(height[i] <= height[j]){
				i++;
			}
			else{
				j--;
			}
		}

		cout << maxArea;

		return maxArea;
	}
};