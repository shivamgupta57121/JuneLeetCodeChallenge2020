// Problem: Random Pick with Weight
// Link: https://leetcode.com/problems/random-pick-with-weight/

// Solution: 
class Solution {
public:
    vector<int> v;
    Solution(vector<int>& w) {
        v.push_back(w[0]);
        int total=w[0];
        for(int i=1;i<w.size();i++){
            total = total + w[i];
            v.push_back(total);
        }
    }
    
    int pickIndex() {
        int val = rand() %v[v.size()-1] +1;
        
        // Linear Search
        /*
        int i=0;
        while(val>v[i]) i++;
        return i;
        */
        
        // Binary Search
        int start=0,end=v.size()-1,ans;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(val == v[mid]) return mid;
            else if(val>v[mid]) start = mid+1;
            else {
                end = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};
