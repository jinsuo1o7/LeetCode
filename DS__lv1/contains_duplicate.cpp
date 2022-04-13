// Day 1
// https://leetcode.com/problems/contains-duplicate/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    set<int> s(begin(nums), end(nums));
    return s.size() == nums.size() ? false : true;
  }
};