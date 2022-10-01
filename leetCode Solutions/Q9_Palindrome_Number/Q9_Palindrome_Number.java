class Palindrome {
    public boolean isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int n = 0;
        int copy = x;
        int newnum = 0;
        while(copy > 0){
            int y = copy%10;
            newnum = (newnum*10) + y;
            copy = copy/10;
            
        }
        if(newnum != x){
            return false;
        }
        return true;
    }
}