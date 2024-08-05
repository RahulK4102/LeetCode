class Solution {
public:
    bool isValid(vector<vector<int>> &matrix,int row,int col,int n){
        for(int i = 0; i<n; i++){
            if(i!=col && matrix[row][i]==matrix[row][col]){
                return false;
            }
            if(i!=row && matrix[i][col]==matrix[row][col]){
                return false;
            }
        }
        return true;
    }
    bool checkValid(vector<vector<int>>& matrix) {
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix.size(); j++){
                if(!isValid(matrix,i,j,matrix[0].size())){
                    return false;
                }
            }
        }
        return true;
    }
};