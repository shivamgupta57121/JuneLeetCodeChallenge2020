// Problem: Single Number 2
// Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3368/

// Solution: 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        long long int cur = 1;
        for(int bits=0;bits<32;bits++){
            int count=0;
            for(auto i:nums){
                if(i & 1<<bits) count++;
            }
            if(count%3) ans+=cur;
            cur*=2;
        }
        return ans;
    }
};
