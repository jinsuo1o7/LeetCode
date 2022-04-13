// Day 2
// https : // leetcode.com/problems/min-cost-climbing-stairs/
#include <bits/stdc++.h>
using namespace std;

// Recursive Memoization
class Solution1 {
public:
  int minCostClimbingStairs(vector<int> &cost) {
    int n = cost.size();
    vector<int> dp(n, -1);
    return min(solve(cost, dp, 0, n), solve(cost, dp, 1, n));
  }
  int solve(vector<int> &cost, vector<int> &dp, int i, int n) {
    if (i >= n)
      return 0;
    if (dp[i] != -1)
      return dp[i];
    return dp[i] = min(solve(cost, dp, i + 1, n), solve(cost, dp, i + 2, n)) +
                   cost[i];
  }
};

// Tabulation
class Solution2 {
public:
  int minCostClimbingStairs(vector<int> &cost) {
    vector<int> dp(1001);
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i <= cost.size(); i++) {
      dp[i] = min((dp[i - 1] + cost[i - 1]), (dp[i - 2] + cost[i - 2]));
    }
    return dp[cost.size()];
  }
};