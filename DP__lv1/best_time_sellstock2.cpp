// Day 7
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxProfit(vector<int> &P) {
    int profit = 0;
    for (int i = 1; i < P.size(); i++)
      if (P[i] > P[i - 1])         // yesterday was valley, today is peak
        profit += P[i] - P[i - 1]; // buy yesterday, sell today
    return profit;
  }
};