// 2022.05.07
// https://leetcode.com/problems/132-pattern/submissions/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool find132pattern(vector<int> &nums) {
    int p3 = INT_MIN;
    stack<int> st;
    for (int i = nums.size() - 1; i >= 0; i--) {
      if (nums[i] < p3)
        return true;
      while (!st.empty() && nums[i] > st.top()) {
        p3 = st.top();
        st.pop();
      }
      st.push(nums[i]);
    }
    return false;
  }
};