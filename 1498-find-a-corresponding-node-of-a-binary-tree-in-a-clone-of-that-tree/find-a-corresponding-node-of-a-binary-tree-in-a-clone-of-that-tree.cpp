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
    void trav(TreeNode* root,TreeNode* target){
        if(root==NULL) return ;
        if(root->val==target->val) {ans=root;return;}
        trav(root->left,target);
        trav(root->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){
        trav(cloned,target);
        return ans;
    }
};