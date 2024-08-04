class Solution {
public:
    void solveSwap(vector<vector<int>> &ans,vector<int> &nums,int n,int ind){
        if(ind==n){
            ans.push_back(nums);
            return;
        }
        for(int i = ind; i<n; i++){
            swap(nums[ind],nums[i]);
            solveSwap(ans,nums,n,ind+1);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        solveSwap(ans,nums,n,0);
        return ans;
    }
};