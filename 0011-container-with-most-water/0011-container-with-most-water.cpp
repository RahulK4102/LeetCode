class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size()-1;
        int max = 0;
        while(s<e){
            int temp = min(height[s],height[e]) * (e-s);
            if(max<temp){
                max = temp;
            }
            if(height[s]<height[e]){
                s++;
            }else{
                e--;
            }
        }
        return max;
    }
};