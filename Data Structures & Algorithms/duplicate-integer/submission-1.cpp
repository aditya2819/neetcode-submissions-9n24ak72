#include <set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> res;
        for(int num : nums){
            if(res.find(num) != res.end())
                return true;
            res.insert(num);
        }
        return false;
    }
};