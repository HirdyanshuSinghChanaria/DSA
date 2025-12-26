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
TreeNode* ans=NULL;
    TreeNode* trav(TreeNode* root,TreeNode* target){
        if(root==NULL) return NULL;
        trav(root->left,target);
        if(root->val==target->val) ans=root;
        trav(root->right,target);
        return ans;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){
        return trav(cloned,target);
    }
};