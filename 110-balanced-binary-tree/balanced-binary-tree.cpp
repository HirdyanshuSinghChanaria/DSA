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
    bool isBalanced(TreeNode* root) {
        return btheight(root)!=-1;
    }
    int btheight(TreeNode* root){
        if(root==NULL) return 0;
        int ln=btheight(root->left);
        if(ln==-1) return -1;
        int rl=btheight(root->right);
        if(rl==-1) return -1;
        if(abs(ln-rl)>1) return -1;
        return max(ln,rl)+1;
    }
};