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
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root) return false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<TreeNode*>temp;
            TreeNode* xpar=root;
            TreeNode* ypar=root;
            bool fx=false,fy=false;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node);
                if(node->left!=NULL) {
                    if(node->left->val==x){
                        xpar=node;
                        fx=true;
                    }
                    else if(node->left->val==y){
                        ypar=node;
                        fy=true;
                    }
                    q.push(node->left);
                }
                if(node->right!=NULL) {
                    if(node->right->val==x){
                        xpar=node;
                        fx=true;
                    }
                    else if(node->right->val==y){
                        ypar=node;
                        fy=true;
                    }
                    q.push(node->right);
                }
            }
            if((!fx && fy) || (fx && !fy)) {return false;}
            else if((fx && fy) && (xpar!=ypar)){return true;}
        }
        return false;
    }
};
// 428-59