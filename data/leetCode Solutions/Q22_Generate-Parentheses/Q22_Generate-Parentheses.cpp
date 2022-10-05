/*
PROBLEM STATEMENT

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
Example 1:
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Example 2:
Input: n = 1
Output: ["()"]
 
Constraints:
1 <= n <= 8

Solve this using Backtracking.
We’ll have 2*n characters, including n open and n close bracket if it is a valid parenthesis.
We’ll pass an empty string & open, close tag numbers left.
Base condition: if both open & close equals 0, means we can’t add any more parenthesis.
if open > 0 means we can add an opening bracket, so add it and decrease its size by 1, help(s+"(", open-1, close).
if open < close means we already added 1 or more opening brackets, so now we can add closing one and decrease its size by 1, help(s+")", open, close-1).
Time complexity: O(n).

Code:
*/


class Solution {
public:
    vector<string>ans;
    vector<string>generateParenthesis(int n) {
        help("",n,n);
        return ans;
    }
    void help(string s, int open, int close){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open > 0) help(s+"(", open-1, close);
        if(open < close) help(s+")", open, close-1);
    }
};
