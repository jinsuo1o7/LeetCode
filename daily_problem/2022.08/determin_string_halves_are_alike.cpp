// https://leetcode.com/problems/determine-if-string-halves-are-alike/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int solve(string s, int begin, int end) {
    int count = 0;
    for (int i = begin; i < end; i++) {
      s[i] = tolower(s[i]);
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' ||
          s[i] == 'i') {
        count++;
      }
    }
    return count;
  }

  bool halvesAreAlike(string s) {
    return (solve(s, 0, s.size() / 2) == solve(s, s.size() / 2, s.size()));
  }
};
