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
    TreeNode* constr(vector<int>&nums,int l,int r){
        if(l>r) return NULL;
        int it=max_element(nums.begin()+l,nums.begin()+r+1)-nums.begin();
        TreeNode* node=new TreeNode(nums[it]);
        node->left=constr(nums,l,it-1);
        node->right=constr(nums,it+1,r);
        return node;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n=nums.size();
        return constr(nums,0,n-1);
    }
};