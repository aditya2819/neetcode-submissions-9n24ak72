class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumN = (n * (n + 1)) / 2;
        int sumNums = 0;
        for(int num : nums){
            sumNums = sumNums + num;
        }
        return sumN - sumNums;
    }
};
