// Day 8
// https://leetcode.com/problems/find-the-difference/
#include <bits/stdc++.h>
using namespace std;
class Solution1 {
public:
  char findTheDifference(string s, string t) {
    char c = 0;
    for (char cs : s)
      c ^= cs;
    for (char ct : t)
      c ^= ct;
    return c;
  }
};

class Solution2 {
public:
  char findTheDifference(string s, string t) {
    unordered_map<char, int> map;
    for (auto c : s) {
      map[c]++;
    }
    for (auto c : t) {
      if (map[c] - 1 < 0)
        return c;
      map[c]--;
    }
    return ' ';
  }
};