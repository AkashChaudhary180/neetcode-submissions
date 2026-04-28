class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int total_profit = 0;

        for(int i = 1 ;i<n;i++){
            int daily_profit = max(0,prices[i]-prices[i-1]);

            total_profit+=daily_profit;
        } 

        return total_profit;
    }
};