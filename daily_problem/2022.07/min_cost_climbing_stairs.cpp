// 2022.07.10
// https://leetcode.com/problems/min-cost-climbing-stairs/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int minCostClimbingStairs(vector<int> &cost) {
    vector<int> dp(cost.size(), INT_MAX);
    return min(solve(cost, dp, 0), solve(cost, dp, 1));
  }
  int solve(vector<int> &cost, vector<int> &dp, int i) {
    if (i >= cost.size())
      return 0;
    if (dp[i] != INT_MAX)
      return dp[i];
    return dp[i] =
               min(solve(cost, dp, i + 1), solve(cost, dp, i + 2)) + cost[i];
  }
};