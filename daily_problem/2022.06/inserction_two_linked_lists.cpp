// 2022.06.06
// https://leetcode.com/problems/intersection-of-two-linked-lists/
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *p1 = headA, *p2 = headB;
    if (p1 == nullptr || p2 == nullptr)
      return nullptr;
    while (p1 != p2 && p1 != nullptr && p2 != nullptr) {
      p1 = p1->next;
      p2 = p2->next;
      if (p1 == p2)
        return p1;
      if (p1 == nullptr)
        p1 = headB;
      if (p2 == nullptr)
        p2 = headA;
    }
    return p1;
  }
};