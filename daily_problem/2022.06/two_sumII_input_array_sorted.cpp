// 2022.06.09
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < numbers.size(); i++) {
      if (map.find(target - numbers[i]) != map.end())
        return {map[target - numbers[i]] + 1, i + 1};
      map[numbers[i]] = i;
    }
    return {};
  }
};