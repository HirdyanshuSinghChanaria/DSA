/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long summ(TreeNode* root, long long a){
    if (!root) return 0;
    a = (long long)(a * 10) + (long long)root->val;
    if (!root->left && !root->right)
        return a;

    return summ(root->left, a) + summ(root->right, a);
    }
    int sumNumbers(TreeNode* root) {
        return summ(root,0LL);
    }
};