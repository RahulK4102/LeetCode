class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i = 0; i<nums.size(); i++){
            ans[nums[i]]++;
        }
        for(auto it:ans){
            if(it.second>(nums.size()/2)){
                return it.first;
            }
        }
        return -1;
    }
};