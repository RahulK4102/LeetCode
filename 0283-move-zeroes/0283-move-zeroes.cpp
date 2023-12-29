class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0;
        int s = 0;
        int e = nums.size();
        while(s<e){
            if(nums[s]!=0){
                swap(nums[s],nums[i]);
                i++;
            }
            s++;
        }
    }
};