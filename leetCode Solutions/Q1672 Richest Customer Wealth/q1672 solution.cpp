#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
    int maxWealth =0;
        
        for(vector<int>& account : accounts)
        {
            int currCwealth = 0;
            for(int money : account)
            {
                currCwealth += money;
            }
            maxWealth = max(maxWealth , currCwealth);
        }
        return maxWealth;
    }
};
