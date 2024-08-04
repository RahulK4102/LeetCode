class Solution {
public:
    void solvePer(vector<int> &temp,set<vector<int>> &ans,vector<int> &nums,vector<int> &index){
        if(temp.size()==nums.size()){
            ans.insert(temp);
            return;
        }
        for(int i = 0; i<nums.size(); i++){
            if(!index[i]){
                temp.push_back(nums[i]);
                index[i] = 1;
                solvePer(temp,ans,nums,index);
                temp.pop_back();
                index[i] = 0;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp;
        set<vector<int>> ans;
        vector<int> index(nums.size(),0);
        vector<vector<int>> res;
        solvePer(temp,ans,nums,index);
        for(auto it:ans){
            res.push_back(it);
        }
        return res;
    }
};