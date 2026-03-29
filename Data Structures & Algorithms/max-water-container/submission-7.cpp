class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int maxAre = 0;
        while(i < j){
            int area = (j - i) * min(heights[i], heights[j]);
            maxAre = max(maxAre, area);
            if(heights[i] > heights[j])
                j--;
            else
                i++;
        }
        return maxAre;
    }
};
