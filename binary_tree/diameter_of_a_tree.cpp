int height(TreeNode<int> *root){
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}

int diameterOfBinaryTree(TreeNode<int> *root) {
	if(root==NULL) return 0;
    int option1 = height(root->left)+height(root->right);
    int option2 = diameterOfBinaryTree(root->left);
    int option3 =diameterOfBinaryTree(root->right);
    return max(option1,max(option2,option3));
}