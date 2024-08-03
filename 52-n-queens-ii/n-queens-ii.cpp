class Solution {
public:
    void Nqueens(vector<string> &temp,vector<int> &left,vector<int> &upper,vector<int> &lower,vector<vector<string>> &ans,int n,int col){
        if(col == n){
            ans.push_back(temp);
            return;
        }
        for(int row = 0; row<n; row++){
            if(lower[row+col]==0 && upper[n-1 + col - row]==0 && left[row] == 0){
                temp[row][col] = 'Q';
                lower[row+col] = 1;
                left[row] = 1;
                upper[n-1 + col - row] = 1;
                Nqueens(temp,left,upper,lower,ans,n,col+1);
                temp[row][col] = '.';
                lower[row+col] = 0;
                left[row] = 0;
                upper[n-1 + col - row] = 0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> temp(n);
        vector<int> left(n,0);
        vector<int> upper(2*n -1,0);
        vector<int> lower(2*n -1,0);
        vector<vector<string>> ans;
        string s (n,'.');
        for(int i = 0; i<n; i++){
            temp[i] = s;
        }
        Nqueens(temp,left,upper,lower,ans,n,0);
        return ans.size();
    }
};