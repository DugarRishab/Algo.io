class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int max=0;
        string maxstr="";
        for(int i=0; i<n; i++){
            int temp=0;
            int lo=i,hi=i;
            while(lo >= 0 && hi < n){
                if(s[lo]==s[hi]){
                    temp=(hi-lo+1);
                }
                else
                    break;
                if(temp > max){
                    max=temp;
                    maxstr=s.substr(lo,temp);
                }
                lo--;
                hi++;
            }
            if(i!=n-1){
                int l=i,h=i+1;
                if(s[i]==s[i+1]){
                    int t=0;
                    while(l >= 0 && h < n){
                        if(s[l]==s[h])
                            t=(h-l+1);
                        else
                            break;
                        if(t > max){
                        max=t;
                        maxstr=s.substr(l,t);
                    }
                        l--;
                        h++;
                    }
                } 
            }
        }
        return maxstr;
    }
};
