class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool res = false;
        unordered_set<int> sets;
        for(int i = 0; i < nums.size(); i++){
            if(sets.count(nums[i]))
                res = true;
            sets.insert(nums[i]);
        }
        return res;
    }
};