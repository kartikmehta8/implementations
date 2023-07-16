void inorder(BinaryTreeNode<int>* root, vector<int>& inorderArr) {
    if (root == NULL) return;
    inorder(root->left, inorderArr);
    inorderArr.push_back(root->data);
    inorder(root->right, inorderArr);
}

void postorder(BinaryTreeNode<int>* root, vector<int>& postorderArr) {
    if (root == NULL) return;
    postorder(root->left, postorderArr);
    postorder(root->right, postorderArr);
    postorderArr.push_back(root->data);
}

void preorder(BinaryTreeNode<int>* root, vector<int>& preorderArr) {
    if (root == NULL) return;
    preorderArr.push_back(root->data);
    preorder(root->left, preorderArr);
    preorder(root->right, preorderArr);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<vector<int>> result;
    vector<int> preorderArr, postorderArr, inorderArr;
    inorder(root, inorderArr);
    preorder(root, preorderArr);
    postorder(root, postorderArr);

    result.push_back(inorderArr);
    result.push_back(preorderArr);
    result.push_back(postorderArr);

    return result;
}