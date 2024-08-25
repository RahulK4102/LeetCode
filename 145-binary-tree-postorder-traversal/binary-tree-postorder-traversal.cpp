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
    void traversal(TreeNode* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        traversal(root->left,ans);
        traversal(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<pair<TreeNode*,int>> st;
        st.push({root,1});
        while(!st.empty()){
            auto it = st.top();
            st.pop();
            if(it.second == 1){
                it.second++;
                st.push(it);
                if(it.first->left!=NULL){
                    st.push({it.first->left,1});
                }
            }else if(it.second == 2){
                it.second++;
                st.push(it);
                if(it.first->right!=NULL){
                    st.push({it.first->right,1});
                }
            }else{
                ans.push_back(it.first->val);
            }
        }
        return ans;
    }
};