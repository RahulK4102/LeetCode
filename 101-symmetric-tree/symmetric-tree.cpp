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
    void traverse(TreeNode* lef,TreeNode* rig,bool &ans){
        if((lef==NULL & rig!=NULL) || (lef!=NULL & rig==NULL)) ans = false;
        if(lef==NULL || rig==NULL) return;
        if(lef->val!=rig->val) ans = false;
        traverse(lef->left,rig->right,ans);
        traverse(lef->right,rig->left,ans);
    }
    bool isSymmetric(TreeNode* root) {
        bool ans = true;
        traverse(root->left,root->right,ans);
        return ans;
    }
};