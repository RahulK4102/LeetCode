class Solution {
public:
    void combiSum2(vector<int> &temp,vector<vector<int>> &ans,vector<int>& candidates,int target,int i){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int j = i; j<candidates.size(); j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(candidates[j]>target) break;
            temp.push_back(candidates[j]);
            combiSum2(temp,ans,candidates,target-candidates[j],j+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        combiSum2(temp,ans,candidates,target,0);
        return ans;
    }
};