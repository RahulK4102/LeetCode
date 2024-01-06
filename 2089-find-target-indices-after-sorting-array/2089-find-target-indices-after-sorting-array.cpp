class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int s = 0;
        int e = nums.size();
        while(s<e){
            if(nums[s]==target){
                ans.push_back(s);
            }
            s++;
        }
        return ans;
    }
};