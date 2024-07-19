class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> ans;
        for(int  i = 0 ; i<=nums.size(); i++){
            ans[i] = 0;
        }
        for(int  i = 0 ; i<nums.size(); i++){
            ans[nums[i]] = 1;
        }
        for(auto it:ans){
            if(it.second==0){
                return it.first;
            }
        }
        return 0 ;
    }
};