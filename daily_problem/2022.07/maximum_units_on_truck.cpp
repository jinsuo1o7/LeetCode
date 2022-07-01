// 2022.07.01
// https://leetcode.com/problems/maximum-units-on-a-truck/
#include <bits/stdc++.h>  
using namespace std;

class Solution {
public:
  int maximumUnits(vector<vector<int>> &boxTypes, int truckSize) {
    int ans = 0;
    sort(boxTypes.begin(), boxTypes.end(),
         [](auto &a, auto &b) { return a[1] > b[1]; });
    for (auto &box : boxTypes) {
      if (truckSize <= 0)
        break;
      ans += min(box[0], truckSize) * box[1];
      truckSize -= box[0];
    }
    return ans;
  }
};