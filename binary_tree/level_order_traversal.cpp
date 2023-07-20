class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> result_temp;
        vector<int> result;
        if (root == NULL) return result_temp;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode* f = q.front();
                q.pop();
                if (f == NULL) continue;
                level.push_back(f->val);
                if (f->left) q.push(f->left);
                if (f->right)q.push(f->right);
            }
            result_temp.push_back(level);
        }
        return result_temp;
    }
};