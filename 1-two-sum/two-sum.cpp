class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size(); i++){
            int n = target - nums[i];
            if(ans.count(n)){
                return {ans[n],i};
            }
            ans[nums[i]] = i;
        }
        return {-1,-1};
        
    }
};