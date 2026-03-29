class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int large = 0;
        while(i < j){
            int area = (j - i) * min(heights[i], heights[j]);
            large = max(large, area);
            if(heights[i] <= heights[j])
                i++;
            else
                j--;
        }
        return large;
    }
};
