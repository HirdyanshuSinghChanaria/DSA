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
    int rightlength(TreeNode* root){
        if(root==NULL) return 0;
        int left=rightlength(root->left);
        int right=rightlength(root->right);
        if(left>right){
            return left+1;
        }
        else{
            return right+1;
        }
    }
    int leftlength(TreeNode* root){
        if(root==NULL) return 0;
        int left=leftlength(root->left);
        int right=leftlength(root->right);
        if(left>right){
            return left+1;
        }
        else{
            return right+1;
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int right=rightlength(root->right);
        int left=leftlength(root->left);
        int l=diameterOfBinaryTree(root->left);
        int r=diameterOfBinaryTree(root->right);
        if(l>r){
            if(l>left+right){
                return l;
            }
            else{
                return left+right;
            }
        }
        else{
            if(r>left+right){
                return r;
            }
            else{
                return left+right;
            }
        }
        return 0;
    }
};