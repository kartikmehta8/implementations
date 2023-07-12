class Solution {
public:
    
    int maxDepth(TreeNode* root, int maxHeight) {
        if (root == NULL) return 0;
        return max(maxDepth(root->left, maxHeight)+1, maxDepth(root->right, maxHeight)+1);
    }
    
    int maxDepth(TreeNode* root) {
        return maxDepth(root, 0);
    }
};