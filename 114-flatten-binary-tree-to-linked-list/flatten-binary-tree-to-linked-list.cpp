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
    void traverse(TreeNode* root,vector<int> &temp){
        if(root==NULL) return;
        temp.push_back(root->val);
        traverse(root->left,temp);
        traverse(root->right,temp);
    }
    void flatten(TreeNode* root) {
        vector<int> temp;
        if(root==NULL) return;
        traverse(root,temp);
        root->left = NULL;
        TreeNode* temp1 = root;
        for(int i = 1; i<temp.size(); i++){
            TreeNode* itr = new TreeNode(temp[i]);
            temp1->right = itr;
            temp1 = itr;
        }
    }
};