// Day 1
// https://leetcode.com/problems/maximum-subarray/submissions/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax = 0, ans = INT_MIN;
        for(auto x : nums){
            curMax = max(curMax + x, x);
            ans = max(ans, curMax);
        }
        return ans;
    }
};