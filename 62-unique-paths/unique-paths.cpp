class Solution {
public:
    int Solve(vector<vector<int>> &dp,int i,int j){
        if(i<0 || j<0){
            return 0;
        }
        if(i==0 && j==0){
            return 1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int up = Solve(dp,i-1,j);
        int left = Solve(dp,i,j-1);
        return dp[i][j] = up + left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return Solve(dp,m-1,n-1);
    }
};