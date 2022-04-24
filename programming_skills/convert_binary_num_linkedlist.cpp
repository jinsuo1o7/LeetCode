// Day 10
// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  int getDecimalValue(ListNode *head) {
    int ans = 0;
    ListNode *prev = head;
    while (prev != nullptr) {
      ans <<= 1;
      ans |= prev->val;
      prev = prev->next;
    }
    return ans;
  }
};