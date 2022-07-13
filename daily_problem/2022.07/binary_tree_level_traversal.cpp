// 2022.07/13
// https://leetcode.com/problems/binary-tree-level-order-traversal/
#include <bits/stdc++.h>
using namespace std;
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
class Solution {
public:
  vector<vector<int>> levelOrder(TreeNode *root) {
    queue<TreeNode *> q;
    vector<vector<int>> ans;
    if (root)
      q.push(root);
    while (q.size()) {
      vector<int> tmp;
      int len = q.size();
      for (int i = 0; i < len; i++) {
        TreeNode *cur = q.front();
        q.pop();
        tmp.push_back(cur->val);
        if (cur->left) {
          q.push(cur->left);
        }
        if (cur->right) {
          q.push(cur->right);
        }
      }
      ans.push_back(tmp);
    }
    return ans;
  }
};