class Solution {
public:
    int Solve(vector<vector<int>> &dp,int i,int j,vector<vector<int>> &grid){
        if(i==0 && j==0) return grid[0][0];
        if(i<0 || j<0) return 9999;
        if(dp[i][j]!=-1) return dp[i][j];
        int up = grid[i][j] + Solve(dp,i-1,j,grid);
        int left = grid[i][j] + Solve(dp,i,j-1,grid);
        return dp[i][j] = min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,0));
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(i==0 && j==0) dp[i][j] = grid[0][0];
                else{
                int up = INT_MAX;
                int left = INT_MAX;
                if(i>0) up=grid[i][j]+dp[i-1][j];
                if(j>0) left=grid[i][j]+dp[i][j-1];
                dp[i][j] = min(up,left);
                }
            }
        }
        // return Solve(dp,m-1,n-1,grid);
        return dp[m-1][n-1];
    }
};