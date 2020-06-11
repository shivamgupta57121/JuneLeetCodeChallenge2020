// Problem: Sort Colors
// Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3357/

//Solution: 

// One-pass algorithm using only constant space
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0,end=nums.size()-1,cur=0;
        while(cur<=end){
            if(nums[cur]==0) {
                swap(nums[start],nums[cur]);
                start++;
            }
            else if(nums[cur]==2) {
                swap(nums[cur],nums[end]);
                end--;
                continue;
            }
            cur++;
        }
    }
};
