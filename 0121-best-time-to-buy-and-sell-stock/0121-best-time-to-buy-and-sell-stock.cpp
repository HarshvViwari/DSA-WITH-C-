class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int buy = -prices[0];
        int sell = 0;

        for(int i = 1; i < n; i++) {
            buy = max(buy, -prices[i]);
            sell = max(sell, buy + prices[i]);
        }

        return sell;
    }
};