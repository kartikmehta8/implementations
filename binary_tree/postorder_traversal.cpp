void postorder(TreeNode* root, vector<int>& postorderArr) {
    if (root == NULL) return;
    postorder(root->left, postorderArr);
    postorder(root->right, postorderArr);
    postorderArr.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {
    vector<int> postorderArr;
    postorder(root, postorderArr);
    return postorderArr;
}
