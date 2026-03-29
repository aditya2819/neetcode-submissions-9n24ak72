class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        vector<int> suffix(nums.size());
        vector<int> prefix(nums.size());
        suffix[nums.size() - 1] = 1;
        prefix[0] = 1;
        int i = 1, j = nums.size() - 2;
        while(i < nums.size() && j >= 0){
            prefix[i] = nums[i - 1] * prefix[i - 1];
            suffix[j] = nums[j + 1] * suffix[j + 1];
            i++;
            j--;
        }
        for(int i = 0; i < nums.size(); i++)
            res[i] = prefix[i] * suffix[i];
        return res;
    }
};
