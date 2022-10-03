#include <bits/stdc++.h>
using namespace std;

int numDecodings(string s) {
  vector<int> dp(101, 0);
  return solve(dp, s, 0);
}

int solve(vector<int>& dp, string s, int i) {
  if (i >= s.size()) return 1;
  if (dp[i] != 0) return dp[i];

  if (s[i] != 0) dp[i] += solve(dp, s, i + 1);
  if (i + 1 < s.size() && (s[i] == '1' || s[i] == '2' && s[i + 1] <= '6'))
    dp[i] += solve(dp, s, i + 2);
  return dp[i];
}
