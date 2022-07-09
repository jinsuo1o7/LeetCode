// 2022.07.09
// https://leetcode.com/problems/jump-game-vi/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int solve(vector<int> &nums, vector<int> &dp, int i, int k) {
    if (i >= nums.size() - 1)
      return 0;
    if (dp[i] != -1e5)
      return dp[i];
    for (int j = 1; j <= k; j++) {
      dp[i] = max(dp[i], solve(nums, dp, i + j, k));
    }
    return dp[i];
  }
  int maxResult(vector<int> &nums, int k) {
    vector<int> dp(nums.size(), -1e5);
    return solve(nums, dp, 0, k);
  }
};