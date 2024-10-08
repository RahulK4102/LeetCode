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
    int hTree(TreeNode* root){
        if(root == NULL) return 0;
        int lh = hTree(root->left);
        int rh = hTree(root->right);
        if(abs(rh-lh)>1) return -1;
        if(lh==-1 || rh== -1) return -1;
        return max(rh,lh) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return hTree(root) !=-1;
    }
};