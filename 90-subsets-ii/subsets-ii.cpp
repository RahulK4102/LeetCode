class Solution {
public:
    void subSet(int ind,vector<int> &temp,set<vector<int>> &ans,vector<int> &nums){
        if(ind==nums.size()){
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[ind]);
        subSet(ind+1,temp,ans,nums);
        temp.pop_back();
        subSet(ind+1,temp,ans,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<int> temp;
       set<vector<int>> ans;
       vector<vector<int>> res;
       sort(nums.begin(),nums.end());
       subSet(0,temp,ans,nums);
       for(auto it:ans){
        res.push_back(it);
       }
       return res;
    }
};