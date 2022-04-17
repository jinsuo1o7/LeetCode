// Day 4
// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool canMakeArithmeticProgression(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int diff = abs(arr[1] - arr[0]);
    for (int i = 1; i < arr.size() - 1; i++) {
      int tmp = abs(arr[i + 1] - arr[i]);
      if (tmp != diff)
        return false;
    }
    return true;
  }
};