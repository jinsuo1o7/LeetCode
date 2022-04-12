// Day 1
// https://leetcode.com/problems/fibonacci-number/
class Solution {
public:
    int fib(int n) {
        if(n < 1) return 0;
        if(n == 1) return 1;
        if(n == 2) return 1;
        return fib(n-1) + fib(n-2);
    }
};