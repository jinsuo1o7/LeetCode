// Day 2
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
  int subtractProductAndSum(int n) {
    int pd = 1, sd = 0;
    while (n) {
      pd *= n % 10;
      sd += n % 10;
      n /= 10;
    }
    return pd - sd;
  }
};