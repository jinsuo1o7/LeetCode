// Day 4
// https://leetcode.com/problems/jump-game-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int jump(vector<int> &nums) {
    vector<int> dp(nums.size(), 10001);
    return solve(nums, dp, 0);
  }
  int solve(vector<int> &nums, vector<int> &dp, int i) {
    if (i >= nums.size() - 1)
      return 0;
    if (dp[i] != 10001)
      return dp[i];
    for (int x = nums[i]; x; x--) {
      dp[i] = min(1 + solve(nums, dp, i + x), dp[i]);
    }
    return dp[i];
  }
};