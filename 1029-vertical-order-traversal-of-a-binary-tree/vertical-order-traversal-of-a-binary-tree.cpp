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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>> que;
        que.push({root,{0,0}});
        while(!que.empty()){
            auto temp = que.front();
            que.pop();
            TreeNode* node = temp.first;
            int x = temp.second.first , y = temp.second.second;
            nodes[x][y].insert(node->val);
            if(node->left){
                que.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                que.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto it:nodes){
            vector<int> col;
            for(auto p:it.second){
                col.insert(col.end(),p.second.begin(),p.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};