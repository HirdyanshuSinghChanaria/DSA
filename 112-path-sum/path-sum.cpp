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
    bool hasPathSum(TreeNode* root, int targetSum) {
        stack<TreeNode*>st;
        stack<int>stk;
        if(root==NULL) return false;
        st.push(root);
        stk.push(root->val);
        while(!st.empty()){
            TreeNode *node=st.top();
            int sum=stk.top();
            st.pop();
            stk.pop();
            if(sum==targetSum&&node->left==NULL&&node->right==NULL) return true;
            if(node->left!=NULL){
                st.push(node->left);
                stk.push(sum+node->left->val);
            }
            if(node->right!=NULL){
                st.push(node->right);
                stk.push(sum+node->right->val);
            }
        }
        return false;
    }
};