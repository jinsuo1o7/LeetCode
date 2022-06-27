// 2022.06.27
// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int minPartitions(string n) { return *max_element(begin(n), end(n)) - '0'; }
};
