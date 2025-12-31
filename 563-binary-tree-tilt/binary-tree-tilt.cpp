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
    int sum=0;
    int fsum(TreeNode* root){
        if(!root){return 0;}
        int left=fsum(root->left);
        int right=fsum(root->right);
        sum+=abs(left-right);
        return left+right+root->val;
    }
    int findTilt(TreeNode* root) {
        fsum(root);
        return sum;
    }
};