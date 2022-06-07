// 2022.06.07
// https://leetcode.com/problems/merge-sorted-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int s = nums1.size() - 1, p = m - 1, q = n - 1;
    while (p >= 0 && q >= 0) {
      if (nums1[p] < nums2[q])
        nums1[s--] = nums2[q--];
      else
        nums1[s--] = nums1[p--];
    }
    while (q >= 0)
      nums1[s--] = nums2[q--];
  }
};