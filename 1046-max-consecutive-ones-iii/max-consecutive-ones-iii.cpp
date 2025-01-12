class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int MaxSize = 0;
        int n = nums.size();
        int l = 0;
        int r = 0;
        int cnt = 0;
        while(r<n){
            if(nums[r]==0) cnt++;
            if(cnt>k){
                if(nums[l]==0) cnt--;
                l++;
            }
            if(cnt<=k){
                MaxSize = max(MaxSize,r-l+1);
            }
            r++;
        }
        return MaxSize;
    }
};