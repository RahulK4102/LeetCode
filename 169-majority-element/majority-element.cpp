class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int res = -1;
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                count = 1;
                res = nums[i];
            }
            else if(nums[i] == res){
                count++;
            }else{
                count-=1;
            }
        }
        return res;
    }
};