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
    void preOrder(TreeNode* root,vector<int> &temp){
        if(root==NULL) {
            temp.push_back(-999);
            return;
        };
        temp.push_back(root->val);
        preOrder(root->left,temp);
        preOrder(root->right,temp);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> P;
        vector<int> Q;
        preOrder(p,P);
        preOrder(q,Q);
        if(P!=Q) return false;
        return true;
    }
};