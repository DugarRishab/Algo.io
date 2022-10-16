class Solution {
     public boolean isMatch(String ss, String pp) {
        char[] p = pp.toCharArray();
        char[] s = ss.toCharArray();
        boolean[][] dp = new boolean[ss.length() + 1][pp.length() + 1];
        dp[0][0] = true;
        for (int j=1; j<pp.length(); j++) {
            if (p[j] == '*') {
                dp[0][j+1] = dp[0][j-1];
            }
        }
        
        
        for (int i=1; i<=ss.length(); i++) {
            for (int j=1; j<=pp.length(); j++) {
                if (s[i-1] == p[j-1] || p[j-1] == '.') {
                    dp[i][j] = dp[i-1][j-1];
                }
                
                if (j>=2 && p[j-1] == '*') {
                    if (s[i-1] == p[j-2] || p[j-2] == '.') {
                        dp[i][j] = dp[i][j] || dp[i-1][j-2] || dp[i-1][j];    
                    } 
                    dp[i][j] = dp[i][j] || dp[i][j-2];                               
                }
            }
        }
        
        return dp[ss.length()][pp.length()];
        
    }
}