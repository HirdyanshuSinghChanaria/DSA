class Solution {
public:
    int count = 0;
    int ma;

    TreeNode* trav(TreeNode* root) {
        if (!root) return NULL;
        int premax=ma;
        if (root->val >= ma) {
            count++;
            ma = root->val;
        }
        trav(root->left);
        trav(root->right);
        ma=premax;
        return root;
    }

    int goodNodes(TreeNode* root) {
        if (!root) return 0;
        ma = root->val;
        count = 1;
        trav(root->left);
        trav(root->right);
        return count;
    }
};
