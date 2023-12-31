class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        int s =0;
        while(s<nums.size()){
            temp[(s+k)%nums.size()]=nums[s];
            s++;
        }
        nums =temp;
    }
};
