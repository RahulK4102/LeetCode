class Solution {
public:
    void combiSum3(vector<int> &temp,vector<vector<int>> &ans,int k,int n,int ind){
        if(k==0){
            if(n==0){
                ans.push_back(temp);
            }
            return;
        }
        for(int i = ind; i<=9; i++){
            if(i>n) break;
            temp.push_back(i);
            combiSum3(temp,ans,k-1,n-i,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        combiSum3(temp,ans,k,n,1);
        return ans;
    }
};