class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int res = 0;
        for(int num : numSet){
            if(numSet.find(num - 1) == numSet.end()){
                int temp = 1;
                while(numSet.find(num + temp) != numSet.end())
                    temp++;
                res = max(res, temp);
            }
        }
        return res;
    }
};
