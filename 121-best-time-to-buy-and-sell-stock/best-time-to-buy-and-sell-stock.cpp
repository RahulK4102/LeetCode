class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Min = prices[0];
        int Max = 0;
        for(int  i = 0; i<prices.size(); i++){
            Min = min(Min,prices[i]);
            Max = max(Max,prices[i]-Min);
        }
        return Max;
    }
};