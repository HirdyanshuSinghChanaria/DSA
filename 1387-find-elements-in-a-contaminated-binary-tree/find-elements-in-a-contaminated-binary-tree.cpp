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
class FindElements {
public:
    vector<int>v;
    void trav(TreeNode* root){
        if(!root) return;
        if(root->left){
            root->left->val=2*root->val+1;
            v.push_back(root->left->val);
            trav(root->left);
        }
        if(root->right){
            root->right->val=2*root->val+2;
            v.push_back(root->right->val);
            trav(root->right);
        }
    }
    FindElements(TreeNode* root) {
        root->val=0;
        v.push_back(0);
        trav(root);
        sort(v.begin(),v.end());
    }
    bool find(int target) {
        auto it=lower_bound(v.begin(),v.end(),target);
        if(it!=v.end() && *it==target) return true;
        else return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */