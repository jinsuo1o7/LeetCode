// 2022.06.01
// https://leetcode.com/problems/running-sum-of-1d-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    if (nums.size() == 1)
      return nums;
    for (int i = 0, j = 1; j < nums.size(); i++, j++) {
      nums[j] = nums[i] + nums[j];
    }
    return nums;
  }
};