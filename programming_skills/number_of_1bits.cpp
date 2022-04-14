// Day 2
// https://leetcode.com/problems/number-of-1-bits/
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
  int hammingWeight(uint32_t n) { return __builtin_popcount(n); }
};

class Solution2 {
public:
  int hammingWeight(uint32_t n) {
    int ans = 0;
    for (int i = 0; i < 32; i++) {
      if (n & (1 << i))
        ans++;
    }
    return ans;
  }
};