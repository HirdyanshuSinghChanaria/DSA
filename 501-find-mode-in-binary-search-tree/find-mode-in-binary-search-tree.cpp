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
    unordered_map<int,int>mp;
    int maxfreq;
    void trav(TreeNode* root){
        if(!root) return;
        trav(root->left);
        mp[root->val]++;
        maxfreq=max(maxfreq,mp[root->val]);
        trav(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int>ans;
        trav(root);
        for(auto it:mp) if(it.second==maxfreq) ans.push_back(it.first);
        return ans;
    }
};