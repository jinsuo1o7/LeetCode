// Day 19
// https://leetcode.com/problems/coin-change-2/
#include <bits/stdc++.h>
using namespace std;

int change(int t, vector<int> &cs) {
  int dp[5001] = {1};
  for (auto c : cs)
    for (auto j = c; j <= t; ++j)
      dp[j] += dp[j - c];
  return dp[t];
}