#include<vector>
#include<cmath>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0; 
        int buy = 0;
        int sell = 1;
        while(sell < prices.size()) {
            if(prices[buy] < prices[sell]){
                int profit = prices[sell] - prices[buy];
                max_profit = max(max_profit, profit);
            }
            else {
                buy = sell;
            }
            sell += 1;
        }
        return max_profit;
    }
};