// Problem: Power of Two
// Link: https://leetcode.com/problems/power-of-two/

// Solution: 

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(((long)n & (long)n-1) == 0 ) return true;
        return false;
    }
};
