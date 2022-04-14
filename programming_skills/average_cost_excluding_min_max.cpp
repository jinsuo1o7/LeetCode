// Day 1
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/submissions/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  double average(vector<int> &salary) {
    int small = INT_MAX, big = INT_MIN;
    double t = 0;
    for (auto x : salary) {
      small = min(small, x);
      big = max(big, x);
      t += x;
    }
    return (t - small - big) / (salary.size() - 2);
  }
};