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
    vector<TreeNode*>in;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        in.push_back(root);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        in.clear();
        inorder(root);
        TreeNode* newroot=in[0];
        TreeNode* curr=newroot;
        for(int i=1;i<in.size();i++){
            curr->right=in[i];
            curr->left=NULL;
            curr=curr->right;
        }
        curr->left=NULL;
        curr->right=NULL;
        return newroot;
    }
};