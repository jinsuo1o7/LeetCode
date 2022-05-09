// 2022.05.09
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<string> mappings = {"abc", "def",  "ghi", "jkl",
                             "mno", "pqrs", "tuv", "wxyz"},
                 ans;
  vector<string> letterCombinations(string digits) {
    if (digits == "")
      return ans;
    string combination = "";
    helper(digits, 0, combination);
    return ans;
  }
  //                  passing by reference ⬇️ so copies are not made at each
  //                  function call
  void helper(string &digits, int i, string &combi) {
    if (i == size(digits)) {
      ans.push_back(combi);
      return;
    }
    for (auto c : mappings[digits[i] - '2']) {
      combi.push_back(c); // add a character from mappings for current position,
      helper(digits, i + 1, combi); // and recurse for next positions
      combi.pop_back();             // backtrack
    }
  }
};