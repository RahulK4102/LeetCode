class Solution {
public:
    int Solve(vector<vector<int>> &dp,int i,int j,vector<vector<int>>& obstacleGrid){
        if(i == 0 && j == 0 && obstacleGrid[i][j]!=1) return 1;
        if(i<0 || j<0) return 0;
        if(obstacleGrid[i][j]==1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up = Solve(dp,i-1,j,obstacleGrid);
        int left = Solve(dp,i,j-1,obstacleGrid);
        return dp[i][j] = up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return Solve(dp,m-1,n-1,obstacleGrid);
    }
};