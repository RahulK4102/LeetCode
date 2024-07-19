class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[s]!=nums[i]){
                nums[s+1] = nums[i];
                s++;
            }
        }
        return s+1;
    }
};