//the solution to the problem used nested for loop as the constrains are within the bounds 

class Solution {
public:
    string countAndSay(int n) {
        //excluding the edges cases
        if(n==1) return "1";
        if(n==2) return "11";
        string s = "11";
        for(int i = 3; i <= n; i++){
            string t = "";
            s += '&';
            int c = 1;
            //using the helper function to count the says
            for(int j = 1; j < s.length(); j++){
                if(s[j] != s[j-1]){
                    t += to_string(c);
                    t += s[j-1];
                    c = 1;
                }
                else c++;
            }
            s = t;
        }
        return s;
    }
    
};