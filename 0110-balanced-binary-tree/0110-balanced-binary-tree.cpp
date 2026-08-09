class Solution {
public:
    int find(TreeNode* root) {
        if(root == NULL) return 0;

        int left = find(root->left);
        if(left == -1) return -1;

        int right = find(root->right);
        if(right == -1) return -1;

        if(abs(left - right) > 1)
            return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        return find(root) != -1;
    }
};