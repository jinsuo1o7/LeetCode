#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode():val(0), next(nullptr){}
};
struct TreeNode
{
    int val;
    TreeNode* left, *right;
    TreeNode():val(0), left(nullptr), right(nullptr){}
    TreeNode(int val):val(val), left(nullptr), right(nullptr){}
};

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return build(head, nullptr);       
    }
    TreeNode* build(ListNode* head, ListNode* end){
        ListNode* mid = getMid(head, end);
        if(mid == nullptr) return nullptr;
        TreeNode* root = new TreeNode(mid->val);
        root->left = build(head, mid);
        root->right = build(mid->next, end);
        return root;
    }

    ListNode* getMid(ListNode* head, ListNode* end){
        if(head == end) return nullptr;
        if(head->next == end) return head;
        ListNode* slow = head, *fast = head;
        while(fast != end && fast->next != end){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
