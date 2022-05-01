// Day 18
// https://leetcode.com/problems/longest-common-subsequence/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int longestCommonSubsequence(string &a, string &b) {
    short m[1001][1001] = {};
    for (auto i = 0; i < a.size(); ++i)
      for (auto j = 0; j < b.size(); ++j)
        m[i + 1][j + 1] =
            a[i] == b[j] ? m[i][j] + 1 : max(m[i + 1][j], m[i][j + 1]);
    return m[a.size()][b.size()];
  }
};