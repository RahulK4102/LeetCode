class Solution {
public:
    int maxRob(vector<int> &temp){
        int n = temp.size();
        int prev = temp[0];
        int prev2 = 0;
        for(int i = 1; i<n; i++){
            int take = temp[i];
            if(i>1) take+=prev2;
            int notTake = 0 + prev;
            int curr = max(notTake,take);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        if(nums.size()==1) return nums[0];
        return maxRob(nums);
    }
};