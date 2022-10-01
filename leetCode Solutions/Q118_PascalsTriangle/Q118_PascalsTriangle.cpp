#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        vector<int> first = {1};             // initializing 1st and 2nd level of triangle
        vector<int> second = {1,1};
        ans[0] = {1};
        if(numRows == 1){
            return ans;                     // if input rows = 1 return the first row
        }
        if(numRows == 2){
            ans[1] = {1,1};                 // if input rows = 2 return the first row and second row
            return ans;
        }
        ans[1] = {1,1};
        for(int i =3; i<=numRows; i++){
            vector<int> inner(i);
            inner[0] = 1;
            inner[i-1] = 1;
            for(int j = 1; j<i-1 ; j++){
                inner[j] = ans[i-2][j-1]+ans[i-2][j];   // formula for making each element of a row
            }
            ans[i-1]= inner;
        }
        return ans;
    }
};