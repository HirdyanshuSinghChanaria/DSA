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
    long long minn = LLONG_MAX, secmin = LLONG_MAX;
    void trav(TreeNode* root){
        if(!root) return;
        trav(root->left);
        if(root->val<minn){
            secmin=minn;
            minn=root->val;
        }
        else if(root->val>minn && root->val<secmin) secmin=root->val;
        trav(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        trav(root);
        if(minn==secmin || secmin==LLONG_MAX) return -1;
        return secmin;
    }
};