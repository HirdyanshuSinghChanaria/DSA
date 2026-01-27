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
    pair<int,int> trav(TreeNode* root){
        if(root==NULL) return {0,0};
        // if(root->left==NULL && root->right==NULL) return root->val;
        auto left=trav(root->left);
        auto right=trav(root->right);
        int sum=left.first+right.first+root->val;
        int no=left.second+right.second+1;
        if(sum/no==root->val) count++;
        // if(left==-1 && right!=-1) return (right+root->val)/2;
        // if(right==-1 && left!=-1) return (left+root->val)/2;
        // if((left+right+root->val)/3==root->val) count++;
        // return (left+right+root->val)/3;
        return {sum,no};
    }
    int averageOfSubtree(TreeNode* root) {
        trav(root);
        return count;
    }
};