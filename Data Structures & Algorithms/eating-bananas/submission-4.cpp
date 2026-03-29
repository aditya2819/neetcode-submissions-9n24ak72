class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        priority_queue<int> maxPiles(piles.begin(), piles.end());
        int maxPile = maxPiles.top();
        int l = 1, r = maxPile;
        int res = maxPile;
        while(l <= r){
            int m = (l + r) / 2;
            int tmp = 0;
            for(int p : piles){
                tmp += (p + m - 1) / m;
            }
            if(tmp <= h){
                res = m;
                r = m - 1;
            }
            else
                l = m + 1;
        }
        return res;
    }
};
