// Day 10
// https://leetcode.com/problems/decode-ways/submissions/
#include <bits/stdc++.h>
using namespace std;
class Solution { // 12 ms, faster than 9.19%
public:
  int numDecodings(const string &s) {
    vector<int> memo(100, 0);
    return dp(s, memo, 0);
  }
  int dp(const string &s, vector<int> &memo, int i) {
    if (i == s.size())
      return 1;
    if (memo[i] != 0)
      return memo[i];
    int ans = 0;
    if (s[i] != '0') // Single digit
      ans += dp(s, memo, i + 1);
    if (i + 1 < s.size() &&
        (s[i] == '1' || s[i] == '2' && s[i + 1] <= '6')) // Two digits
      ans += dp(s, memo, i + 2);
    return memo[i] = ans;
  }
};