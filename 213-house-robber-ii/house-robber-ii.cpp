class Solution {
public:
    int Rob(vector<int> &temp){
        int prev = temp[0];
        int prev2 = 0;
        for(int ind = 1; ind<temp.size(); ind++){
            int take = temp[ind];
            if(ind>1) take += prev2; 
            int notTake = prev;
            int cur = max(take,notTake);
            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        int n = nums.size();
        if(n==1) return nums[0];
        for(int i = 0; i<n; i++){
            if(i!=0){
                temp1.push_back(nums[i]);
            }
            if(i!=n-1){
                temp2.push_back(nums[i]);
            }
        }
        return max(Rob(temp1),Rob(temp2));
    }
};