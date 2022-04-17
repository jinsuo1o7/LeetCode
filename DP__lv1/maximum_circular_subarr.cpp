// Day 5
// https://leetcode.com/problems/maximum-sum-circular-subarray/

// 1. Find maximum subarray sum using kadane's algorithm (max)
// 2. Find minimum subarray sum using kadane's algorithm (min)
// 3. Find total sum of the array(sum)
// 4. Now, if sum == min return max
// 5. Otherwise, return maximum(max, sum - min)

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxSubarraySumCircular(vector<int> &nums) {
    int sum = 0, curMax = 0, totalMax = INT_MIN, curMin = 0, totalMin = INT_MAX;
    for (auto x : nums) {
      sum += x;
      curMax = max(x, curMax + x);
      totalMax = max(totalMax, curMax);
      curMin = min(x, curMin + x);
      totalMin = min(totalMin, curMin);
    }
    if (sum == totalMin)
      return totalMax;
    return max(sum - totalMin, totalMax);
  }
};