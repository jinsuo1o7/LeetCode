// Day 12
// https://leetcode.com/problems/range-sum-query-immutable/

class NumArray {
public:
  vector<int> nums;
  NumArray(vector<int> &nums) { this->nums = nums; }

  int sumRange(int left, int right) {
    int ans = 0;
    for (int i = left; i <= right; i++)
      ans += nums[i];
    return ans;
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */