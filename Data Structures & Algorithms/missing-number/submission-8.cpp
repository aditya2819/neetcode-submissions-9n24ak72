class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumN = (n * (n + 1)) / 2;
        int sumNums = reduce(nums.begin(), nums.end());
        return sumN - sumNums;
    }
};
