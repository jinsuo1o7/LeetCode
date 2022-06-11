// 2022.06.11
// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int minOperations(vector<int> &nums, int x) {
    int total = accumulate(nums.begin(), nums.end(), 0), s = nums.size();
    if (total < x)
      return -1;
    int i = 0, cur = 0, ans = -1;
    for (int j = 0; j < s; j++) {
      cur += nums[j];
      while (cur > total - x) {
        cur -= nums[i++];
      }
      if (cur == total - x) {
        ans = max(j - i + 1, ans);
      }
    }
    return ans == -1 ? -1 : s - ans;
  }
};