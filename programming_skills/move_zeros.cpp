// Day 6
// https://leetcode.com/problems/move-zeroes/submissions/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    for (int i = 0, j = 0; i < nums.size(); i++) {
      if (nums[i] != 0)
        swap(nums[i], nums[j++]);
    }
  }
};