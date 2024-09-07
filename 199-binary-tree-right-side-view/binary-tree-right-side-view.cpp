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
    void traverse(TreeNode* root,map<int,int> &temp,int l){
        if(root==NULL) return;
        if(temp.find(l)==temp.end()){
            temp[l]=root->val;
        }
        traverse(root->right,temp,l+1);
        traverse(root->left,temp,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        map<int,int> temp;
        if(root==NULL) return ans;
        traverse(root,temp,0);
        for(auto it:temp){
            ans.push_back(it.second);
        }
        return ans;
    }
};