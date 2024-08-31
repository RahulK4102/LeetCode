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
    void check(TreeNode* root,bool &ans,TreeNode* &prev){
        if(!root) return;
        check(root->left,ans,prev);
        if(!prev){
            prev = root;
        }else{
            if(prev->val>=root->val){
                ans = false;
                return;
            }else{
                prev=root;
            }
        }
        check(root->right,ans,prev);
    }
    bool isValidBST(TreeNode* root) {
        bool ans = true;
        TreeNode* prev = NULL;
        check(root,ans,prev);
        return ans;
    }
};