class Solution {
public:
    bool isValid(int row,int col,vector<string> &temp,int n){
        int ROW = row;
        int COL = col;
        while(ROW>=0 && COL>=0){
            if(temp[ROW][COL]=='Q') return false;
            ROW--;
            COL--;
        }
        ROW = row;
        COL = col;
        while(COL>=0){
            if(temp[ROW][COL]=='Q') return false;
            COL--;
        }
        COL = col;
        while(ROW<n && COL>=0){
            if(temp[ROW][COL]=='Q') return false;
            ROW++;
            COL--;
        }
        return true;
    }
    void Nqueens(vector<vector<string>> &ans,vector<string> &temp,int n,int col){
        if(col == n){
            ans.push_back(temp);
            return;
        }
        for(int row = 0; row<n; row++){
            if(isValid(row,col,temp,n)){
                temp[row][col] = 'Q';
                Nqueens(ans,temp,n,col+1);
                temp[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n);
        string s (n,'.');
        for(int i = 0; i<n; i++){
            temp[i] = s;
        }
        Nqueens(ans,temp,n,0);
        return ans;
    }
};