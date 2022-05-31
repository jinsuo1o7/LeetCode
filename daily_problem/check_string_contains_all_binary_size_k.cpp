// 2022.05.31
// https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool hasAllCodes(string s, int k) {
    if (k > s.size())
      return false;

    unordered_set<string> my_set;

    for (int i = 0; i <= s.size() - k; i++)
      my_set.insert(s.substr(i, k));

    return my_set.size() == pow(2, k);
  }
};