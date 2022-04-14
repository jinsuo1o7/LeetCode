// Day 1
// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
class Solution {
public:
  int countOdds(int low, int high) {
    // 1부터 low-1까지 홀수의 개수는 low/2 개
    // 1부터 high까지 홀수의 개수는 (high+1)/2개
    return (high + 1) / 2 - low / 2;
  }
};