// Day 5
// https://leetcode.com/problems/symmetric-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool isSymmetric(TreeNode *root) {
    TreeNode *left, *right;
    queue<TreeNode *> lq, rq;
    lq.push(root->left);
    rq.push(root->right);
    while (!lq.empty() && !rq.empty()) {
      auto left = lq.front();
      auto right = rq.front();
      lq.pop(), rq.pop();
      if (left == nullptr && right == nullptr)
        continue;
      if (left == nullptr || right == nullptr)
        return false;
      if (left->val != right->val)
        return false;
      lq.push(left->left);
      lq.push(left->right);
      rq.push(right->right);
      rq.push(right->left);
    }
    return true;
  }
};