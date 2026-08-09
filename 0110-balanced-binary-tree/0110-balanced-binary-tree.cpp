class Solution {
public:
    int find(TreeNode* root,int &valid) {
        if(root == NULL) return 0;

        int left = find(root->left,valid);
      
        int right = find(root->right,valid);
      
        if(abs(left - right) > 1)
           valid=0;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        int valid=1;
         find(root,valid);
         return valid;
    }
};