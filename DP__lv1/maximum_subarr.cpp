// Day 5
// https://leetcode.com/problems/maximum-subarray/

#include <bits/stdc++.h>
using namespace std;
// Recursive Memoization
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    vector<vector<int>> dp(2, vector<int>(size(nums), -1));
    return solve(nums, 0, false, dp);
  }
  int solve(vector<int> &A, int i, bool mustPick, vector<vector<int>> &dp) {
    if (i >= size(A))
      return mustPick ? 0 : -1e5;
    // memoization
    if (dp[mustPick][i] != -1)
      return dp[mustPick][i];
    if (mustPick)
      return dp[mustPick][i] = max(0, A[i] + solve(A, i + 1, true, dp));
    return dp[mustPick][i] = max(solve(A, i + 1, false, dp),
                                 A[i] + solve(A, i + 1, true, dp));
  }
};

// Tabulation
class Solution1 {
public:
  int maxSubArray(vector<int> &nums) {
    vector<int> dp(nums);
    for (int i = 1; i < nums.size(); i++)
      dp[i] = max(nums[i], dp[i - 1] + nums[i]);
    return *max_element(begin(dp), end(dp));
  }
};

// Kandane's Algrorithm
// dp[i]가 dp[i-1]에만 의존하므로 배열을 유지할 필요가 없음
// 값을 변수에 저장해서 최대값을 구하면 됨
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int curMax = 0, maxTillNow = INT_MIN;
    for (auto c : nums)
      curMax = max(c, curMax + c), maxTillNow = max(maxTillNow, curMax);
    return maxTillNow;
  }
};