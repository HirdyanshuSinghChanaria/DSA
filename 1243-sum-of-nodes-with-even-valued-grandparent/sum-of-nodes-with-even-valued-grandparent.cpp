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
    void trav(TreeNode* root,TreeNode* parent){
        if(!root) return;
        if(root->left!=NULL){
            if(parent!=NULL && parent->val%2==0) sum+=root->left->val;
            trav(root->left,root);
        }
        if(root->right!=NULL){
            if(parent!=NULL && parent->val%2==0) sum+=root->right->val;
            trav(root->right,root);
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        trav(root,NULL);
        return sum;
    }
};