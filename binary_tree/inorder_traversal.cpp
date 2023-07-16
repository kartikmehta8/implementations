void inorder(TreeNode* root, vector<int>& inorderArr) {
    if (root == NULL) return;
    inorder(root->left, inorderArr);
    inorderArr.push_back(root->data);
    inorder(root->right, inorderArr);
}

vector<int> getInOrderTraversal(TreeNode *root) {
    vector<int> inorderArr;
    inorder(root, inorderArr);
    return inorderArr;
}