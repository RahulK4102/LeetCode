class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int mid = 0;
        int last = nums.size()-1;
        while(mid<=last){
            if(nums[mid] == 0){
                swap(nums[start],nums[mid]);
                start++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[last]);
                last--;
            }
        }
    }
};