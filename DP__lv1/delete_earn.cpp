// Day 3
// https://leetcode.com/problems/delete-and-earn/submissions/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int deleteAndEarn(vector<int> &nums) {
    if (nums.size() == 1)
      return nums[0];
    vector<int> tmp(10001);
    vector<int> dp(10001);
    for (auto x : nums) {
      tmp[x] += x;
    }
    dp[0] = 0;      // 0 을 더해도 0임
    dp[1] = tmp[1]; // 모든 1을 더한 값
    for (int i = 2; i < tmp.size(); i++) {
      dp[i] = max(tmp[i] + dp[i - 2], dp[i - 1]);
    }
    return *max_element(begin(dp), end(dp));
  }
};
