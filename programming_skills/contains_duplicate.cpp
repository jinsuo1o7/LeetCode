// Day 11
// https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    set<int> s(begin(nums), end(nums));
    return s.size() == nums.size() ? false : true;
  }
};