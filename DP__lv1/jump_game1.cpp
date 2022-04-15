// Day 4
// https : // leetcode.com/problems/jump-game/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool jump(vector<int> &nums) {
    vector<int> dp(nums.size(), -1);
    return solve(nums, dp, 0);
  }
  bool solve(vector<int> &nums, vector<int> &dp, int i) {
    if (i >= nums.size() - 1)
      return true;
    if (dp[i] != -1)
      return dp[i];
    for (int x = nums[i]; x; x--) {
      if (solve(nums, dp, i + x))
        return dp[i] = true;
    }
    return dp[i] = false;
  }
};