// Problem: Search Insert Position
// Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3356/

// Solution: 

// Brute Force : O(n) 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for(i=0;i<nums.size();i++) {
            if(target<=nums[i]) return i;
        }
        return i;
    }
};
