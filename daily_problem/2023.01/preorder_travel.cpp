#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preOrder(root, ans);
        return ans;
    }

    void preOrder(TreeNode* node, vector<int>& ans){
        if(node == nullptr) return;
        ans.push_back(node->val);
        preOrder(node->left, ans);
        preOrder(node->right, ans);
    }
};