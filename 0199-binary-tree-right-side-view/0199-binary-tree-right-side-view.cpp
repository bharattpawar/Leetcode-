/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int,vector<TreeNode*>> level;
    void dfs(TreeNode* root, int l) {
        if(!root)
        return;
        level[l].push_back(root);
        dfs(root->left,l+1);
        dfs(root->right,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root,0);
        vector<int> res;
        for(auto& x : level) {
            TreeNode* node = (x.second).back();
            res.push_back(node->val);
        }
        return res;
    }
};