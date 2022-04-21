// Day 7
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxProfit(vector<int> &prices) {

    auto [_, finalNotHold] = trade(prices.size() - 1, prices);

    // Max profit must come from notHold state finally.
    return finalNotHold;
  }

  tuple<int, int> trade(int day, vector<int> &prices) {

    if (day == 0) {

      // Hold on day_0 = buy at day_#0 = -prices[0]
      // Not hold on day_0 = do nothing = 0
      return tuple<int, int>{-prices[0], 0};
    }

    auto [prevHold, prevNotHold] = trade(day - 1, prices);

    // either keep hold, or buy in stock today at stock price
    int curHold = max(prevHold, prevNotHold - prices[day]);

    // either keep not-hold, or sell out stock today at stock price
    int curNotHold = max(prevNotHold, prevHold + prices[day]);

    return tuple<int, int>{curHold, curNotHold};
  }
};