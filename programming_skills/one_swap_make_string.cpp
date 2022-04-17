// Day 4
// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool areAlmostEqual1(string s1, string s2) {
    int n = size(s1), mismatch = 0, flag = 1;
    vector<int> arr(26);
    for (int i = 0; i < n; i++)
      arr[s1[i] - 'a']++, arr[s2[i] - 'a']--;
    for (auto freqDiff : arr)
      if (freqDiff) { // if frequency difference of characters in both strings
                      // is different
        flag = 0;
        break;
      }
    if (!flag)
      return false;

    for (int i = 0; i < n; i++)
      if (s1[i] != s2[i])
        mismatch++;
    return mismatch <= 2;
  }

  bool areAlmostEqual2(string s1, string s2) {
    int n = size(s1), cnt = 0, idx1 = 0, idx2 = 0;
    for (int i = 0; i < n; i++)
      if (s1[i] != s2[i]) {
        cnt++;
        if (!idx1)
          idx1 = i;
        else
          idx2 = i;
      }
    return (cnt == 0 || cnt == 2) && s1[idx1] == s2[idx2] &&
           s1[idx2] == s2[idx1];
  }
};