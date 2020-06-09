// Problem: Is Subsequence
// Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3355/

// Solution: 
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sLen = s.size();
        if(!sLen) return true;
        int tLen = t.size();
        int i=0,j=0;
        while(j<tLen){
            if(s[i]==t[j]){
                i++;
                if(i==sLen) return true;
            }
            j++;
        }
        return false;
    }
};
