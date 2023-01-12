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
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<TreeNode *> q;
        q.push(root);

        int lv = 1;
        while(q.size()){
            int qs = q.size();
            while(qs--){
                auto cur = q.front();
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                if(!cur->left && !cur->right) return lv;
            }
            lv++;
        }
        return -1;
    }
};