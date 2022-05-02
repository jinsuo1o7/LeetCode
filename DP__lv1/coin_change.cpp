// Day 19
// https://leetcode.com/problems/coin-change/submissions/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int coinChange(vector<int> &coins, int amount) {
    int n = coins.size();
    //  initializing each index with (1 + amount) which is 1 greater than max
    //  possible answer
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0; // 0 amount can be formed with 0 amount of coins
    //  take each amount and try each coin for that amount to find minimum coins
    //  required for that amount.
    for (int currAmount = 1; currAmount <= amount; ++currAmount)
      for (auto &coin : coins)
        if (coin <= currAmount) // only update dp[currAmount] if coin value is
                                // not greater than that current amount.
          //              either take the current coin under consideration &
          //              update or keep dp[currAmount] same
          dp[currAmount] = min(dp[currAmount], 1 + dp[currAmount - coin]);
    //  if is greater than amount, return -1, since to form any amount we
    //  shouldnt need more than amount number of coins
    return dp[amount] > amount ? -1 : dp[amount];
  }
};