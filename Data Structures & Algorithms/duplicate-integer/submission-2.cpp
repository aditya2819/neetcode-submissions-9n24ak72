class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> resSet;
        for(int num : nums){
            if(resSet.find(num) != resSet.end())
                return true;
            resSet.insert(num);
        }
        return false;
    }
};