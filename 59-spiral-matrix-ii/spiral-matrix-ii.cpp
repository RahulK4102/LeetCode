class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        int value = 1;
        while(top <= bottom && left <= right){
            for(int i = left; i<=right; i++){
                ans[top][i]= value++;
            }
            top++;
            for(int i = top; i<=bottom; i++){
                ans[i][right]= value++;
            }
            right--;
            if(top<=bottom){
                for(int i = right; i>=left; i--){
                    ans[bottom][i]= value++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i = bottom; i>=top; i--){
                    ans[i][left]= value++;
                }
                left++;
            }
        }
        return ans;
    }
};