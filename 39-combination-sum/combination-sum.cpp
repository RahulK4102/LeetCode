class Solution {
public:
    void combiSum(vector<vector<int>>& ans,vector<int>& candidates,vector<int>& temp,int n, int target,int i){
        if(i==n){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            combiSum(ans,candidates,temp,n,target-candidates[i],i);
            temp.pop_back();
        }
        combiSum(ans,candidates,temp,n,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        combiSum(ans,candidates,temp,n,target,0);
        return ans;
    }
};