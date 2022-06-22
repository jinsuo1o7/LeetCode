// 2022.06.22
// https://leetcode.com/problems/kth-largest-element-in-an-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int findKthLargest(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
  }
};