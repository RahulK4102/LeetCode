class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> a;
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            a[nums[i]]++;
        }
        for(auto it:a){
            nums[count] = it.first;
            count++;
        }
        return count;
    }
};