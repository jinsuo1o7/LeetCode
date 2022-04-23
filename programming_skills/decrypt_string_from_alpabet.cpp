// Day 9
// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string freqAlphabets(string s) {
    string ans = "";
    int i = 0;
    while (i < s.size()) {
      if (i + 2 < s.size() && s[i + 2] == '#') {
        int tmp = (s[i] - '0') * 10 + (s[i + 1] - '0');
        ans += char(tmp + 'a' - 1);
        i += 3;
      } else {
        ans += char(s[i] - '0' + -1 + 'a');
        i++;
      }
    }
    return ans;
  }
};