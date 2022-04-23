// Day 9
// https://leetcode.com/problems/to-lower-case/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string toLowerCase(string s) {
    for (auto &c : s) {
      if ('A' <= c && c <= 'Z') {
        c = c - 'A' + 'a';
      }
    }
    return s;
  }
};