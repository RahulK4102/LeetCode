class Solution {
public:
    bool Sudoku(vector<vector<char>> &board){
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[i].size(); j++){
                if(board[i][j]=='.'){
                    for(char k = '1'; k<='9';k++){
                        if(isValid(board,i,j,k)){
                            board[i][j] = k;
                            if(Sudoku(board)==true){
                                return true;
                            }else{
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isValid(vector<vector<char>> &board,int row,int col,int k){
        for(int i = 0; i<9; i++){
            if(board[row][i]==k){
                return false;
            }
            if(board[i][col]==k){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==k){
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        Sudoku(board);
    }
};