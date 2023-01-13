#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left, *right;
    TreeNode():val(0), left(nullptr), right(nullptr){}
    TreeNode(int val):val(val), left(nullptr), right(nullptr){}
};
class Solution {
public:
int findMaxLen(TreeNode* root)
{
    if(root==NULL) return 0;
    return 1+max(findMaxLen(root->left),findMaxLen(root->right));
}
void levelOrderRec(TreeNode* root, vector<vector<int>>& vec, int level)
{
    if(root==NULL) return;
    vec[level].push_back(root->val);
    levelOrderRec(root->left,vec,level-1);
    levelOrderRec(root->right,vec,level-1);
}

vector<vector<int> > levelOrderBottom(TreeNode *root) {
    vector<vector<int>> result;
    if(root==NULL) return result;
    int count = findMaxLen(root);
    for(int i = 0; i < count; i++)
    {
        vector<int> temp;
        result.push_back(temp);
    }
    levelOrderRec(root, result, count-1);
    return result;
}
};