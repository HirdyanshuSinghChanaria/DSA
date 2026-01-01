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
vector<int>temp;
    void trav(TreeNode* root){
        if(root==NULL) return;
        trav(root->left);
        temp.push_back(root->val);
        trav(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        trav(root);
        int s=temp.size();
        for(int i=0;i<s;i++){
            int f=k-temp[i];
            int h=temp[i];
            temp[i]=INT_MIN;
            auto it=lower_bound(temp.begin(),temp.end(),f);
            temp[i]=h;
            if(it==temp.end()) continue;
            if(*it==f) return true;
        }
        return false;
    }
};