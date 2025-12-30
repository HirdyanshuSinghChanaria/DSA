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
int count=0;
    void trav(TreeNode* root,int &a){
        if(root==NULL) return;
        trav(root->left,a);
        a+=root->val;
        count++;
        trav(root->right,a);
    }
    bool isUnivalTree(TreeNode* root) {
        int a=0;
        trav(root,a);
        int temp=root->val*count;
        if(a==temp) return true;
        return false;
    }
};