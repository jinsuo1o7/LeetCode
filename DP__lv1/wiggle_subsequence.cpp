// Day 17
// https://leetcode.com/problems/wiggle-subsequence/
#include <bits/stdc++.h>
using namespace std;
int wiggleMaxLength(vector<int> &nums) {
  int n = size(nums), len = 1, up = 1, down = 1;
  for (int i = 1; i < n; i++)
    if (nums[i] < nums[i - 1])
      up = 1 + down;
    else if (nums[i] > nums[i - 1])
      down = 1 + up;
  // array could start with min-peak or max-peak depending on which any of up &
  // down could be our answer
  return max(up, down);
}