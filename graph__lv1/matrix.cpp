// Day 5
// https://leetcode.com/problems/01-matrix/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> dir = {-1, 0, 1, 0, -1};
  vector<vector<int>> updateMatrix(vector<vector<int>> &mat) {
    int m = mat.size(), n = mat[0].size();
    queue<pair<int, int>> q;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (mat[i][j])
          mat[i][j] = -1;
        else
          q.push({i, j});
      }
    }
    while (q.size()) {
      auto [r, c] = q.front();
      q.pop();
      for (int i = 0; i < 4; i++) {
        int nr = r + dir[i], nc = c + dir[i + 1];
        if (nr < 0 || nc < 0 || nr == m || nc == n || mat[nr][nc] != -1) {
          continue;
        }
        mat[nr][nc] = mat[r][c] + 1;
        q.push({nr, nc});
      }
    }
    return mat;
  }
};
