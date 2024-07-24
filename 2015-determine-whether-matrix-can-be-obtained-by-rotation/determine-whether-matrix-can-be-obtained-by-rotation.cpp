class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int count = 0;
        if(mat==target){
            return true;
        }
        while(count<4){
            if(mat==target){
                return true;
            }
            for(int i = 0; i<mat.size()-1; i++){
                for(int  j = i+1; j<mat.size(); j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i = 0; i<mat.size(); i++){
                reverse(mat[i].begin(), mat[i].end());
            }
            count++;
        }
        return false;
    }
};