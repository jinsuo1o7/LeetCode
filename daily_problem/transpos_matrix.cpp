// 2022.06.02
// https://leetcode.com/problems/transpose-matrix/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>> &matrix) {
    int r = matrix[0].size(), c = matrix.size();
    vector<vector<int>> ans(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        ans[i][j] = matrix[j][i];
      }
    }
    return ans;
  }
};