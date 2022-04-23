// Day 8
// https://leetcode.com/problems/goal-parser-interpretation/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string interpret(string command) {
    string ans = "";
    for (int i = 0; i < command.size(); i++) {
      if (command[i] == 'G')
        ans += 'G';
      if (command[i] == '(' && command[i + 1] == ')')
        ans += 'o';
      else if (command[i] == '(' && command[i + 1] == 'a')
        ans += "al";
    }
    return ans;
  }
};