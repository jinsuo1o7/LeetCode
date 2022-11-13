#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++) {
      int j = i + 1, k = nums.size() - 1;
      int target = -nums[i];
      while (j < k) {
        if (nums[j] + nums[k] < target) {
          j++;
        } else if (nums[j] + nums[k] > target) {
          k--;
        } else {
          vector<int> tmp = {nums[i], nums[j], nums[k]};
          ans.push_back(tmp);
          while (j < k && nums[j] == tmp[1]) {
            j++;
          }
          while (j < k && nums[k] == tmp[2]) {
            k--;
          }
        }
      }
      while (i + 1 < nums.size() && nums[i] == nums[i + 1])
        i++;
    }
    return ans;
  }
};