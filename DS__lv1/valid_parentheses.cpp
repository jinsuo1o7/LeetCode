// Day 3
// https://leetcode.com/problems/valid-parentheses/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool isValid(string s) {
    stack<int> st;
    for (auto x : s) {
      if (x == '(' || x == '{' || x == '[')
        st.push(x);
      else {
        if (st.empty())
          return false; // 이 지점에 왔다는 것은 닫는 괄호를 만난것 ! 스택이
                        // 비어있을 수가 없음..
        if (x == '}' && st.top() != '{')
          return false;
        if (x == ']' && st.top() != '[')
          return false;
        if (x == ')' && st.top() != '(')
          return false;
        st.pop();
      }
    }
    return st.empty();
  }
};