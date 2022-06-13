// 2022.06.13
// https://leetcode.com/problems/triangle/submissions/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int minimumTotal(vector<vector<int>> &triangle) {
    vector<vector<int>> dp(triangle.size());
    for (int i = 0; i < triangle.size(); i++)
      dp[i] = vector<int>(i + 1, -1);
    return solve(triangle, dp, 0, 0);
  }
  int solve(vector<vector<int>> &tri, vector<vector<int>> &dp, int i, int j) {
    if (i >= tri.size() || j >= tri[i].size())
      return 0;
    if (dp[i][j] != -1)
      return dp[i][j];
    return dp[i][j] =
               min(solve(tri, dp, i + 1, j + 1), solve(tri, dp, i + 1, j)) +
               tri[i][j];
  }
};