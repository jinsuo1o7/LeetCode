// 2022.05.04
// https://leetcode.com/problems/max-number-of-k-sum-pairs/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxOperations(vector<int> &nums, int k) {
    sort(begin(nums), end(nums));
    int i = 0, j = nums.size() - 1, ans = 0;
    while (i < j) {
      if (nums[i] + nums[j] == k) {
        ans++;
        i++;
        j--;
      } else if (nums[i] + nums[j] > k) {
        j--;
      } else {
        i++;
      }
    }
    return ans;
  }
};

class Solution2 {
public:
  int maxOperations(vector<int> &nums, int k) {
    unordered_map<int, int> m;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (m[k - nums[i]] > 0) {
        m[k - nums[i]]--;
        ans++;
      } else {
        m[nums[i]]++;
      }
    }
    return ans;
  }
};