class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        long long XOR = 0;
        int a = 0;
        int b = 0;
        for(int i = 0; i<nums.size(); i++){
            XOR ^=nums[i];
        }
        int rightMostBit = (XOR & (XOR-1))^XOR;
        for(int i = 0; i<nums.size(); i++){
            if(rightMostBit&nums[i]){
                a ^= nums[i];
            }else{
                b ^= nums[i];
            }
        }
        ans.push_back(a);
        ans.push_back(b);
    return ans;
    }
};