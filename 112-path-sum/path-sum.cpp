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
    void travers(TreeNode* root,int targetSum,bool &ans,TreeNode* temp,TreeNode* prev){
        if(root==NULL){
            if(targetSum==0 && prev->left==NULL && prev->right==NULL){
                ans = true;
            }
            return;
        }
        prev = root;
        travers(root->left,targetSum-root->val,ans,temp,prev);
        travers(root->right,targetSum-root->val,ans,temp,prev);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = false;
        if(root==NULL) return ans;
        TreeNode* prev = NULL;
        if(root->left==NULL && root->right==NULL){
            if(targetSum==root->val) return true;
        }
        travers(root,targetSum,ans,root,prev);
        return ans;
    }
};