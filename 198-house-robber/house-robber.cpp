class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        for(int i = 1; i<n; i++){
            int take = nums[i];
            if(i>1) take += prev2;
            int notTake = prev;
            int cur = max(take,notTake);
            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
};