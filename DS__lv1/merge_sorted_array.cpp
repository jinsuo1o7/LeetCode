// Day 2
// https://leetcode.com/problems/merge-sorted-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int r1 = m - 1, r2 = n - 1, t = nums1.size() - 1;
    while (r2 >= 0 && r1 >= 0) {
      if (nums1[r1] < nums2[r2])
        nums1[t--] = nums2[r2--];
      else
        nums1[t--] = nums1[r1--];
    }
    while (r2 >= 0)
      nums1[t--] = nums2[r2--];
  }
};