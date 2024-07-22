class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        int negIt = 0;
        int posIt = 0;
        for(int i = 0; i<nums.size(); i++){
            if(i%2==0){
                nums[i] = pos[posIt];
                posIt++; 
            }else{
                nums[i] = neg[negIt];
                negIt++;
            }
        }
        return nums;
    }
};