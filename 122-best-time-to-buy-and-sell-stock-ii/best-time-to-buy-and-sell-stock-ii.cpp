class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> ans;
        int profit = 0;
        int Min = prices[0];
        int TotalProfit = 0;
        for(int i = 0; i<prices.size(); i++){
            Min = min(Min,prices[i]);
            profit = prices[i] - Min;
            if(profit>0){
                ans.push_back(profit);
                Min = prices[i];
            } 
        }
        for(auto it:ans){
            TotalProfit += it;
        }
        return TotalProfit;
    }
};