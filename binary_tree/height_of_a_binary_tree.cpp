int maxDepth(TreeNode<int> *root) {
    if (root == NULL) return -1;
    return max(maxDepth(root->left), maxDepth(root->right))+1;
}