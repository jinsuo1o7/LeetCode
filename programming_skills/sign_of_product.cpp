// Day 4
// https://leetcode.com/problems/sign-of-the-product-of-an-array/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int arraySign(vector<int> &nums) {
    int mv = 0, zero = 0;
    for (auto x : nums) {
      if (x == 0)
        return 0;
      if (x < 0)
        mv++;
    }
    if (mv % 2 == 1)
      return -1;
    return 1;
  }
};