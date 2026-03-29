class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 1;
        int profitM = 0;
        while(j < prices.size()){
            if(prices[i] < prices[j]){
                int profit = prices[j] - prices[i];
                profitM = max(profitM, profit);
            }
            else{
                i = j;
            }
            j++;
        }
        return profitM;
    }
};
