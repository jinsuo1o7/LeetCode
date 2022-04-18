// Day 6
// https://leetcode.com/problems/invert-binary-tree/
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
  // Recursive
  TreeNode *invertTree(TreeNode *root) {
    if (root) {
      invertTree(root->left);
      invertTree(root->right);
      swap(root->left, root->right);
    }
    return root;
  }

  // stack
  TreeNode *invertTree(TreeNode *root) {
    std::stack<TreeNode *> stk;
    stk.push(root);

    while (!stk.empty()) {
      TreeNode *p = stk.top();
      stk.pop();
      if (p) {
        stk.push(p->left);
        stk.push(p->right);
        std::swap(p->left, p->right);
      }
    }
    return root;
  }

  // BFS queue
  TreeNode *invertTree(TreeNode *root) {

    if (nullptr == root)
      return root;

    queue<TreeNode *> myQueue; // our queue to do BFS
    myQueue.push(root);        // push very first item - root

    while (!myQueue.empty()) { // run until there are nodes in the queue

      TreeNode *node = myQueue.front(); // get element from queue
      myQueue.pop();                    // remove element from queue

      if (node->left != nullptr) { // add left kid to the queue if it exists
        myQueue.push(node->left);
      }

      if (node->right != nullptr) { // add right kid
        myQueue.push(node->right);
      }

      // invert left and right pointers
      TreeNode *tmp = node->left;
      node->left = node->right;
      node->right = tmp;
    }

    return root;
  }
};
