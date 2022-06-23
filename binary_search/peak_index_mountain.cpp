// Day 2
// https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
  int peakIndexInMountainArray(vector<int> &arr) {
    int l = 0, r = arr.size() - 1, m;
    while (l < r) {
      m = l + (r - l) / 2;
      if (arr[m] < arr[m + 1])
        l = m + 1;
      else
        r = m;
    }
    return l;
  }
};

class Solution2 {
public:
  int peakIndexInMountainArray(vector<int> &arr) {
    return max_element(arr.begin(), arr.end()) - arr.begin();
  }
};
