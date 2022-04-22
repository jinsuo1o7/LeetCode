// Day 6
// https://leetcode.com/problems/richest-customer-wealth/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maximumWealth(vector<vector<int>> &accounts) {
    int ans = 0;
    for (auto x : accounts) {
      int tmp = 0;
      for (auto y : x) {
        tmp += y;
        ans = max(ans, tmp);
      }
    }
    return ans;
  }
};