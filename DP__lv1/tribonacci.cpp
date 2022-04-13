// Day 1
// https://leetcode.com/problems/n-th-tribonacci-number/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int tribonacci(int n) {
    vector<int> dp(38, -1);
    return solve(n, dp);
  }
  int solve(int n, vector<int> &dp) {
    if (dp[n] != -1)
      return dp[n];
    if (n <= 0)
      return 0;
    if (n == 1)
      return 1;
    if (n == 2)
      return 1;
    return dp[n] = solve(n - 1, dp) + solve(n - 2, dp) + solve(n - 3, dp);
  }
};
