// 2022.05.27
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
class Solution {
public:
  int numberOfSteps(int num) {
    int ans = 0;
    if (num == 0)
      return 0;
    while (num != 0) {
      if (num % 2 == 0) {
        num /= 2;
        ans++;
      } else {
        num -= 1;
        ans++;
      }
    }
    return ans;
  }
};