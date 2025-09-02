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
int camera=0;
 int solve(TreeNode* root){
        if(!root){
            return 1;
        }
        int lstate=solve(root->left);
        int rstate=solve(root->right);
        if(lstate==0 || rstate==0){
            camera++;
            return 2;
        }
        if(lstate==2 || rstate==2){
            return 1;
        }
        else return 0;
    }
    int minCameraCover(TreeNode* root) {
        if(solve(root)==0) camera++;
        return camera;
    }
};