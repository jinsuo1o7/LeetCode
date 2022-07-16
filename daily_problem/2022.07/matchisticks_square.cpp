// 2022.07.12
// https://leetcode.com/problems/matchsticks-to-square/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  bool dfs(vector<int> &sidesLength, const vector<int> &matches, int index) {
    if (index == matches.size())
      return sidesLength[0] == sidesLength[1] &&
             sidesLength[1] == sidesLength[2] &&
             sidesLength[2] == sidesLength[3];
    for (int i = 0; i < 4; ++i) {
      sidesLength[i] += matches[index];
      if (dfs(sidesLength, matches, index + 1))
        return true;
      sidesLength[i] -= matches[index];
    }
    return false;
  }

public:
  bool makesquare(vector<int> &nums) {
    if (nums.empty())
      return false;
    vector<int> sidesLength(4, 0);
    return dfs(sidesLength, nums, 0);
  }
};