/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* trav(TreeNode* root,TreeNode* target){
        if(root==NULL) return NULL;
        TreeNode* left=trav(root->left,target);
        if(left!=NULL) return left;
        if(root->val==target->val) return root;
        TreeNode* right=trav(root->right,target);
        return right;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){
        return trav(cloned,target);
    }
};