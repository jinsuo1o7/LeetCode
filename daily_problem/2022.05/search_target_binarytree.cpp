// 2022.04.14
// https : // leetcode.com/problems/search-in-a-binary-search-tree/

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  TreeNode searchBST(TreeNode *root, int tar) {
    if (root == nullptr || root->val == tar)
      return root;
    if (root->val < tar)
      return searchBST(root->right, tar);
    else
      return searchBST(root->left, tar);
    return root;
  }
};