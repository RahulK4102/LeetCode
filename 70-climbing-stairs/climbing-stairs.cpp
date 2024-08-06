class Solution {
public:
    int solve(vector<int> &dp,int n){
        if(n==0){
            return 1;
        }
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        int step1 = solve(dp,n-1);
        return dp[n] = solve(dp,n-1) + solve(dp,n-2);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(dp,n);
    }
};