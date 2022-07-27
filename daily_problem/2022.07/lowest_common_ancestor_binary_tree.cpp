// 2022.07.26
// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  TreeNode *dfsTraverse(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (root == p || root == q || root == NULL)
      return root;
    TreeNode *parent1 = dfsTraverse(root->left, p, q);
    TreeNode *parent2 = dfsTraverse(root->right, p, q);
    if (parent1 && parent2)
      return root;
    else
      return parent1 ? parent1 : parent2;
  }
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    return dfsTraverse(root, p, q);
  }
};