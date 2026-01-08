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
    bool ans=false;
    bool check(TreeNode* root,TreeNode* subRoot){
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;
        if(root->val!=subRoot->val) return false;
        return check(root->left,subRoot->left) && check(root->right,subRoot->right);
    }
    void trav(TreeNode* root,TreeNode* subRoot){
        if(!root || ans) return;
        trav(root->left,subRoot);
        if(check(root,subRoot)){
            ans=true;
        }
        trav(root->right,subRoot);
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        trav(root,subRoot);
        return ans;
    }
};