class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        double ans ;
        for(int i =0;i<nums1.size();i++){
            temp.push_back(nums1[i]);
        }
        for(int i =0;i<nums2.size();i++){
            temp.push_back(nums2[i]);
        }
        sort(temp.begin(),temp.end());
        int e = temp.size();
        if(e%2 == 1){
            ans = temp[e/2];
            return ans;
        }else{
            ans = (temp[e/2 - 1 ] + temp[e/2])/2.0;
            return ans;
        }
    }
};