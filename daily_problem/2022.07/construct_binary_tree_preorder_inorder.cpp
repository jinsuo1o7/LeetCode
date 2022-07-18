// 2022.07.14
// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    int rootIdx = 0;
    return build(preorder, inorder, rootIdx, 0, inorder.size() - 1);
  }

  TreeNode *build(vector<int> &preorder, vector<int> &inorder, int &rootIdx,
                  int left, int right) {
    if (left > right)
      return NULL;
    int pivot = left; // find the root from inorder
    while (inorder[pivot] != preorder[rootIdx])
      pivot++;

    rootIdx++;
    TreeNode *newNode = new TreeNode(inorder[pivot]);
    newNode->left = build(preorder, inorder, rootIdx, left, pivot - 1);
    newNode->right = build(preorder, inorder, rootIdx, pivot + 1, right);
    return newNode;
  }
};