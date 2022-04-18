// Day 5
// https://leetcode.com/problems/next-greater-element-i/submissions/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums) {
    vector<int> ans;
    stack<int> s;
    unordered_map<int, int> m;
    for (int n : nums) {
      while (s.size() && s.top() < n) {
        m[s.top()] = n;
        s.pop();
      }
      s.push(n);
    }
    for (int n : findNums)
      ans.push_back(m.count(n) ? m[n] : -1);
    return ans;
  }
};