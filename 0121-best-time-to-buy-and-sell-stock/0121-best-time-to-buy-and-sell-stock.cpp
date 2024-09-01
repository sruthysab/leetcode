class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int currCost = 0;
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); i++){
            currCost = prices[i] - minPrice;
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, currCost);
        }
        return maxProfit;
    }
};