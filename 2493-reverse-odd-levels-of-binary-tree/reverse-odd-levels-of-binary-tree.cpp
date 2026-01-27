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
    void rev(vector<TreeNode*>&v){
        int l=0,r=v.size()-1;
        while(l<=r){
            int temp=v[l]->val;
            v[l]->val=v[r]->val;
            v[r]->val=temp;
            l++;r--;
        }
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return NULL;
        queue<TreeNode*>q;
        q.push(root);
        int count=-1;
        while(!q.empty()){
            int size=q.size();
            count++;
            vector<TreeNode*>v;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                v.push_back(node);
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            if(count%2!=0) rev(v);
        }
        return root;
    }
};