class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int i = 0, j = 1;
        while(j < prices.size()){
            if(prices[i] < prices[j]){
                int profit = prices[j] - prices[i];
                res = max(res, profit);
            }
            else{
                i = j;
            }
            j++;
        }
        return res;
    }
};
