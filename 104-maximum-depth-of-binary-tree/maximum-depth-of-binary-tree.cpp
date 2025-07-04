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
    int maxDepth(TreeNode* root) {
        int rcount,lcount;
        if(root!=NULL){
            lcount=maxDepth(root->left);
            rcount=maxDepth(root->right);
            if(lcount>rcount) return lcount+1;
            else return rcount+1;
        }
        return 0;
    }
};