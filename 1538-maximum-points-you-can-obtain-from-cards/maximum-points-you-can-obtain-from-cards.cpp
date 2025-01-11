class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum = 0;
        int rightsum = 0;
        int maxSum = 0;
        int n = cardPoints.size();
        for(int i = 0; i<k; i++){
            leftsum = leftsum + cardPoints[i];
            maxSum = leftsum;
        }
        int right = n-1;
        for(int j = k-1; j>=0; j--){
            leftsum = leftsum - cardPoints[j];
            rightsum = rightsum + cardPoints[right];
            right--;
            maxSum = max(maxSum,leftsum+rightsum);
        }
        return maxSum;
    }
};