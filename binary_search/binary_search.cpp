// Day 1
// https://leetcode.com/problems/binary-search/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int search(vector<int> &arr, int target) {
    int l = 0, r = arr.size() - 1, m;
    while (l <= r) {
      m = l + (r - l) / 2;
      if (arr[m] == target)
        return m;
      if (target < arr[m])
        r = m - 1;
      else
        l = m + 1;
    }
    return -1;
  }
};