// Day 3
// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int nearestValidPoint(int x, int y, vector<vector<int>> &points) {
    int n = points.size(), dist = INT_MAX, tmp, ans = -1;
    for (int i = 0; i < n; i++) {
      if (points[i][0] == x || points[i][1] == y) {
        tmp = abs(x - points[i][0]) + abs(y - points[i][1]);
        if (dist > tmp) {
          ans = i;
          dist = tmp;
        }
      }
    }
    return ans;
  }
};