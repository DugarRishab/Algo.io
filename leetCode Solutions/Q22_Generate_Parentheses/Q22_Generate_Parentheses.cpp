/*
    int this approachwe first create a vector and call our helper function with 
    open and close value as 0 , our n given in question ., an empty string and we pass address of 
    our freshly created vector.
    we are having open and close parenthesis so we check if the size of our string is 2*n
    if yes then we push that string in vector and finally return 
    else we recursively call for (open<n) && (close<open)
*/


class Solution {
public:
    void solve(int open,int close,string s,vector<string>&ans,int n){
       if(s.length() == n*2){
           ans.push_back(s);
           return;
       }
        if(open <n){solve(open+1,close,s+'(',ans,n);}
        if(close < open){solve(open,close+1,s+')',ans,n);}
    }
    
    

    //
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0,0,"",ans,n);
        return ans;
    }
};