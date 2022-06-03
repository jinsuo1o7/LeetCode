// 2022.05.16
// https://leetcode.com/problems/shortest-path-in-binary-matrix/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int shortestPathBinaryMatrix(vector<vector<int>> &grid) {
    if (grid[0][0] == 1)
      return -1;
    pair<int, int> dirs[] = {{1, 1},  {0, 1},   {1, 0},  {0, -1},
                             {-1, 0}, {-1, -1}, {1, -1}, {-1, 1}};
    queue<pair<int, int>> q;
    q.push({0, 0});
    grid[0][0] = 1;

    while (q.size()) {
      auto cur = q.front();
      int r = cur.first;
      int c = cur.second;
      q.pop();
      if (r == grid.size() - 1 && c == grid[0].size() - 1)
        return grid[r][c];
      for (auto dir : dirs) {
        int nr = r + dir.first;
        int nc = c + dir.second;
        if (nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() &&
            grid[nr][nc] == 0) {
          q.push({nr, nc});
          grid[nr][nc] = grid[r][c] + 1;
        }
      }
    }
    return -1;
  }
};