#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

		int n1 = nums1.size();
		int n2 = nums2.size();

		vector<int> nums3(n1 + n2);

		merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());

		sort(nums3.begin(), nums3.end());

		float x = ((float)n1 + (float)n2 - 1) / 2;
    	int y= floor(x);
		int z = ceil(x);

		if( y == z){
			return nums3[x];
		}
		else{
			return (((float)nums3[y] + (float)nums3[z]) / 2);
		}
	}
};