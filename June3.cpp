// Problem: Two City Scheduling
// Link: https://leetcode.com/problems/two-city-scheduling/

// Solution: 
class Solution {
public:
    static int myComp(vector<int> &a , vector<int> &b){
        if(a[0]-a[1]<b[0]-b[1]) return true;
        return false;
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        int val=0;
        sort(costs.begin(),costs.end(),myComp);
        for(int i=0;i<n/2;i++) val+=costs[i][0];
        for(int i=n/2;i<n;i++) val+=costs[i][1];
        return val;
    }
};
