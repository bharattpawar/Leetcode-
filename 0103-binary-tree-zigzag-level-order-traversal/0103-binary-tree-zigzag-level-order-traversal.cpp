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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode *>s1;
stack<TreeNode*>s2;
vector<vector<int>> ans;  if(root==NULL)return ans;
s1.push(root); 
vector<int>check;
while(!s1.empty()||!s2.empty()){ 
    while(!s1.empty()){
    TreeNode *temp=s1.top();
    s1.pop();
    check.push_back(temp->val); if(temp->left!=NULL){
        s2.push(temp->left);
    }
    if(temp->right!=NULL){
        s2.push(temp->right);
    }
      
}
if(!check.empty())ans.push_back(check);
 check.clear();
    while(!s2.empty()){
    TreeNode *temp=s2.top();
    check.push_back(temp->val);
    s2.pop();
    if(temp->right!=NULL){
        s1.push(temp->right);
    }
      if(temp->left!=NULL){
        s1.push(temp->left);
    }  
}
if(!check.empty())ans.push_back(check);check.clear();
}

return ans;

    }
};