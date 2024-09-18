class Solution {
public:
    void Solve(vector<int> temp,vector<vector<int>> &ans,vector<int> &nums,int index){
        if(index>=nums.size()){
            ans.push_back(temp);
            return;
        }
        Solve(temp,ans,nums,index+1);
        temp.push_back(nums[index]);
        Solve(temp,ans,nums,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        Solve(temp,ans,nums,0);
        return ans;
    }
};