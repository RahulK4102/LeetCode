class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> ans;
        unordered_map<int,int> check;
        for(int i = 0; i<arr.size(); i++){
            ans[arr[i]]++;
        }
        for(auto i:ans){
            check[i.second]++;
        }
        for(auto i:check){
            if(i.second>1){
                return false;
            }
        }
        return true;
    }
};