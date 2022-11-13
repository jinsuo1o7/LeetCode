#include <bits/stdc++.h>
using namespace std;

// map
class Solution1 {
public:
  int majorityElement(vector<int> &nums) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
      m[nums[i]]++;
    }
    for (int i = 0; i < nums.size(); i++) {
      if (m[nums[i]] > nums.size() / 2)
        return nums[i];
    }
    return -1;
  }
};

// sorting
class Solution2 {
public:
  int majorityElements(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
  }
};