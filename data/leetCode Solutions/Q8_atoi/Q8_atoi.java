/* This solution uses the concept and strings and the functions concerning it. */

Class answer{
  public int atoi(String s){
    if(s==null) return 0;     //in case the String is empty
    s=s.trim();  //removes leading spaces
    if(s.length()==0) return 0;
    int sign=-1;
    long ans=0;   //taking long since integer might exceed the max/min
    int max=Integer.MAX_VALUE;
    int min=Integer.MIN_VALUE;
    if(s.charAt(0)=='-') sign = -1; 
        int i = (s.charAt(0)=='+' || s.charAt(0)=='-') ? 1 : 0; //skips an index if a sign is there.
        while(i<s.length()){
            if(!Character.isDigit(s.charAt(i))) break;    //returns 0 if first index is not a digit and breaks out of the loop.
            ans = ans * 10 + (s.charAt(i)-'0'); 
            if(sign == -1 && ans*-1 < MIN) return MIN; //if ans exceeds min then return min according to the question.
            if(sign == 1 && ans > MAX) return MAX;  //if ans exceeds max then return max according to the question.
            i++;
        }
        return (int)ans*sign;
  }
}
    
  
