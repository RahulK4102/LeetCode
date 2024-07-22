class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int Min = prices[0];
        int TotalProfit = 0;
        for(int i = 0; i<prices.size(); i++){
            Min = min(Min,prices[i]);
            profit = prices[i] - Min;
            if(profit>0){
                TotalProfit += profit;
                Min = prices[i];
            } 
        }
        return TotalProfit;
    }
};