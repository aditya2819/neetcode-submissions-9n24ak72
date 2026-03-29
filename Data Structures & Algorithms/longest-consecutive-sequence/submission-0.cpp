class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> seq;
        int res = 0;
        for(int num : nums){
            if(!seq[num]){
                seq[num] = seq[num - 1] + seq[num + 1] + 1;
                seq[num - seq[num - 1]] = seq[num];
                seq[num + seq[num + 1]] = seq[num];
                res = max(res, seq[num]);
            }
        }
        return res;
    }
};
