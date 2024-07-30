class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int size = nums.size();
       if(size == 0){
        return 0;
       }
       int Max = 1;
       unordered_set<int> Set;
       for(int i = 0; i<size; i++){
        Set.insert(nums[i]);
       }
       for(auto it:Set){
        if(Set.find(it-1)==Set.end()){
            int count = 1;
            int x = it;
            while(Set.find(x+1)!=Set.end()){
                count++;
                x++;
            }
            Max = max(Max,count);
        }
       }
       return Max;
    }
};