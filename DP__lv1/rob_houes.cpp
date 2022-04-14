// Day 3
// https://leetcode.com/problems/house-robber/
#include <bits/stdc++.h>
using namespace std;

// Recursive Memoization
class Solution1 {
public:
  int rob(vector<int> &nums) {
    vector<int> dp(nums.size(), -1);
    return solve(nums, dp, 0);
  }

  int solve(vector<int> &nums, vector<int> &dp, int i) {
    if (i >= nums.size())
      return 0;
    if (dp[i] != -1)
      return dp[i];
    return dp[i] =
               max(solve(nums, dp, i + 2) + nums[i], solve(nums, dp, i + 1));
  }
};

// Tabulation
class Solution2 {
public:
  int rob(vector<int> &nums) {
    if (nums.size() == 1)
      return nums[0];
    vector<int> dp(nums);
    dp[1] = max(dp[0], dp[1]);
    for (int i = 2; i < nums.size(); i++) {
      dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
    }
    return dp.back();
  }
};

// Kandane's Algorithm
class Solution3 {
public:
  int rob(vector<int> &nums) {
    int prev1 = 0, prev2 = 0, cur = 0;
    for (auto x : nums) {
      cur = max(prev1 + x, prev2);
      prev1 = prev2;
      prev2 = cur;
    }
    return cur;
  }
};