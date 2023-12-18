class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i<nums.size();i++){
            for(int j = i+1; j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target){
                    ans.push_back(min(i,j));
                    ans.push_back(max(i,j));
                    
                }
            }
        }
         return ans;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i<nums.size()-1;i++){
            int j = i+1;
            while(j<nums.size()){
                
            
          if(nums[i]+nums[j]==target){
                    ans.push_back(min(i,j));
                    ans.push_back(max(i,j));
                }
            j++;
            }
        }
         return ans;
    }
};
