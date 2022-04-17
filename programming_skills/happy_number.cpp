// Day 4
// https://leetcode.com/problems/happy-number/discuss/57092/4-C%2B%2B-Solutions-with-Explanations

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isHappy(int n) {
    unordered_set<int> tmp;

    while (n != 1) {
      if (tmp.find(n) == tmp.end())
        tmp.insert(n);
      else
        return false;

      int sum = 0;
      while (n != 0) {
        sum += pow(n % 10, 2);
        n = n / 10;
      }

      n = sum;
    }

    return true;
  }
};