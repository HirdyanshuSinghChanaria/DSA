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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>a;
        vector<double>ans;
        a.push(root);
        while(!a.empty()){
            int i,size=a.size();
            double avg=0;
            for(i=0;i<size;i++){
                TreeNode *node=a.front();
                a.pop();
                if(node->left!=NULL) a.push(node->left);
                if(node->right!=NULL) a.push(node->right);
                avg+=node->val;
            }
            avg/=(i);
            ans.push_back(avg);
        }
        return ans;
    }
};