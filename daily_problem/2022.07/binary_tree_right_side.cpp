// 2022.07.11
// https://leetcode.com/problems/binary-tree-right-side-view/
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
  void dfs(TreeNode *node, int level, vector<int> &ans) {
    if (!node)
      return;
    if (ans.size() < level)
      ans.emplace_back(node->val);
    dfs(node->right, level + 1, ans);
    dfs(node->left, level + 1, ans);
  }
  vector<int> rightSideView(TreeNode *root) {
    vector<int> ans;
    dfs(root, 1, ans);
    return ans;
  }
};
