// Day 1
// https://leetcode.com/problems/flood-fill/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int newColor) {
    solve(image, sr, sc, image[sr][sc], newColor);
    return image;
  }
  void solve(vector<vector<int>> &image, int sr, int sc, int c, int newColor) {
    if (sr >= image.size() || sc >= image[0].size() || sr < 0 || sc < 0 ||
        image[sr][sc] == newColor)
      return;
    if (image[sr][sc] != c)
      return;
    image[sr][sc] = newColor;
    solve(image, sr + 1, sc, c, newColor);
    solve(image, sr - 1, sc, c, newColor);
    solve(image, sr, sc + 1, c, newColor);
    solve(image, sr, sc - 1, c, newColor);
  }
};