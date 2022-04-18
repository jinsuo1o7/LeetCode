// Day 6
// https://leetcode.com/problems/maximum-product-subarray/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxProduct(vector<int> &A) {
    vector<int> dpMin(A), dpMax(A);
    int ans = A[0];
    for (int i = 1; i < size(A); i++) {
      dpMin[i] = min(A[i], A[i] * (A[i] >= 0 ? dpMin[i - 1] : dpMax[i - 1]));
      dpMax[i] = max(A[i], A[i] * (A[i] >= 0 ? dpMax[i - 1] : dpMin[i - 1]));
      ans = max(ans, dpMax[i]);
    }
    return ans;
  }
};