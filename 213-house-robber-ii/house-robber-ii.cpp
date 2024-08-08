class Solution {
public:
    int Rob(vector<int> &temp, vector<int> &dp,int ind){
        if(ind == 0) return temp[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int take = temp[ind] + Rob(temp,dp,ind-2);
        int notTake = 0 + Rob(temp,dp,ind-1);
        return dp[ind] = max(take,notTake);
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
        vector<int> dp(n,-1);
        int tem1 = Rob(temp1,dp,temp1.size()-1);
        vector<int> dP(n,-1);
        int tem2 = Rob(temp2,dP,temp2.size()-1);
        return max(tem1,tem2);
    }
};