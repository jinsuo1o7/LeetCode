#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  string breakPalindrome(string palindrome) {
    if (palindrome.size() < 2) {
      return "";
    }

    int idx = 0;
    while (idx < palindrome.size() / 2) {
      if (palindrome[idx] != 'a') {
        palindrome[idx] = 'a';
        return palindrome;
      }
      idx++;
    }
    palindrome.back() = 'b';
    return palindrome;
  }
};
