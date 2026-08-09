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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        int curr=0;
        int ans=0;
if(root==NULL)return 0;
q.push(root);
while(!q.empty()){
    ans++;
    curr=q.size();
    while(curr){
        if(q.front()->left!=NULL)q.push(q.front()->left);
        if(q.front()->right!=NULL)q.push(q.front()->right);q.pop();
        curr--;
    }
}return ans;
    }
};