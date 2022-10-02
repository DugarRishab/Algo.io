#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int idx=-1;
  
        int n = a.size();
        for(int i=n-1; i>0; i--){                            
            if(a[i]>a[i-1]){
                idx=i;
                break;
            }
        }
        if(idx == -1){                                     // if does not have a lexicographical larger rearrangement.
            reverse(a.begin(), a.end());
        }else{                                           
            int prev = idx;
            for(int i=idx+1; i<n; i++){
                if(a[i]>a[idx-1] and a[i]<=a[prev]){
                    prev=i;
                }
            }
            swap(a[idx-1],a[prev]);
            reverse(a.begin()+idx,a.end());
        }
    }
};
