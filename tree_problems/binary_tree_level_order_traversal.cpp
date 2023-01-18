#include <bits/stdc++.h>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode *> q;
        q.push(root);

        while(q.size()){
            int qs = q.size();
            vector<int> tmp;
            while(qs--){
                auto cur = q.front();
                q.pop();
                tmp.push_back(cur->val);

                if(cur->left)
                    q.push(cur->left);
                if(cur->right)
                    q.push(cur->right);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};