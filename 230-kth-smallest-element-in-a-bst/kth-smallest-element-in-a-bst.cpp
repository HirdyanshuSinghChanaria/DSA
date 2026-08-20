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
int temp,ans;
void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    temp--;
    if(temp==0) {ans=root->val;return;}
    inorder(root->right);
}
    int kthSmallest(TreeNode* root, int k) {
        temp=k;
        inorder(root);
        return ans;
    }
};