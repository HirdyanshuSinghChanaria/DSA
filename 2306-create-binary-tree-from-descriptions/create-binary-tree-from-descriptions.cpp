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
    TreeNode* createBinaryTree(vector<vector<int>>& nums) {
        unordered_map<int,TreeNode*>mp;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            TreeNode* node;
            if(mp.find(nums[i][0])==mp.end()){
                node=new TreeNode(nums[i][0]);
                mp[node->val]=node;
            }
            else{
                node=mp[nums[i][0]];
            }
            if(nums[i][2]==1){
                TreeNode* left;
                if(mp.find(nums[i][1])==mp.end()){
                    left=new TreeNode(nums[i][1]);
                    node->left=left;
                    mp[left->val]=left;
                }
                else{
                    node->left=mp[nums[i][1]];
                }
            }
            if(nums[i][2]==0){
                TreeNode* right;
                if(mp.find(nums[i][1])==mp.end()){
                    right=new TreeNode(nums[i][1]);
                    node->right=right;
                    mp[right->val]=right;
                }
                else{
                    node->right=mp[nums[i][1]];
                }
            }
            s.insert(nums[i][1]);
        }
        for(auto it:mp){
            if(s.find(it.first)==s.end()) return it.second;
        }
        return NULL;
    }
};