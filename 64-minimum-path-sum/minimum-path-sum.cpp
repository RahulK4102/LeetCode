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
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return Solve(dp,m-1,n-1,grid);
    }
};