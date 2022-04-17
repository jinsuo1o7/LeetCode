// Day 5
// https://leetcode.com/problems/binary-tree-level-order-traversal/
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
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> ans;
    queue<TreeNode *> q;
    if (root)
      q.push(root);
    while (q.size()) {
      vector<int> lv;
      int len = q.size();
      for (int i = 0; i < len; i++) {
        auto node = q.front();
        q.pop();
        lv.push_back(node->val);
        if (node->left)
          q.push(node->left);
        if (node->right)
          q.push(node->right);
      }
      ans.push_back(lv);
    }
    return ans;
  }
};