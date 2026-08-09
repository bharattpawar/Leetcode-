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
int find(TreeNode* root,int ans){
if(root==NULL)return 0;
return max(1+find(root->left,ans),1+find(root->right,ans));
}
    int maxDepth(TreeNode* root) {
       int ans=0;
       return find(root,ans);
 
    }
};