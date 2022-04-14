// Day 3
// https://leetcode.com/problems/house-robber-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int rob(vector<int> &nums) {
    if (nums.size() == 1)
      return nums[0];
    if (nums.size() <= 2)
      return max(nums[0], nums[1]);
    vector<int> dp1(size(nums) - 1, -1);
    vector<int> dp2(size(nums), -1);
    return max(solve(nums, dp1, 0), solve(nums, dp2, 1));
  }
  int solve(vector<int> &nums, vector<int> &dp, int i) {
    if (i >= dp.size())
      return 0;
    if (dp[i] != -1)
      return dp[i];
    return dp[i] =
               max(solve(nums, dp, i + 1), solve(nums, dp, i + 2) + nums[i]);
  }
};