// Day 3
// https: // leetcode.com/problems/number-of-enclaves/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int numEnclaves(vector<vector<int>> &grid) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (i * j == 0 || i == grid.size() - 1 || j == grid[0].size() - 1) {
          dfs(grid, i, j);
        }
      }
    }
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j]) {
          ans += dfs(grid, i, j);
        }
      }
    }
    return ans;
  }
  int dfs(vector<vector<int>> &grid, int i, int j) {
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() ||
        grid[i][j] == 0) {
      return 0;
    }
    grid[i][j] = 0;
    return 1 + dfs(grid, i + 1, j) + dfs(grid, i - 1, j) + dfs(grid, i, j + 1) +
           dfs(grid, i, j - 1);
  }
};