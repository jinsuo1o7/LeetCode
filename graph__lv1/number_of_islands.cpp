// Day 1
// https://leetcode.com/problems/number-of-islands/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int numIslands(vector<vector<char>> &grid) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '1') {
          dfs(grid, i, j);
          ans++;
        }
      }
    }
    return ans;
  }
  void dfs(vector<vector<char>> &grid, int i, int j) {
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() ||
        grid[i][j] == '0')
      return;
    if (grid[i][j] == '2')
      return;
    grid[i][j] = '2';
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
  }
};