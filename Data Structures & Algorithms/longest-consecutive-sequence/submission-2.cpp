class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for(int num : nums){
            if(numSet.find(num - 1) == numSet.end()){
                int cnt = 1;
                int curr = num;
                while(numSet.find(curr + 1) != numSet.end()){
                    cnt++;
                    curr++;
                }
                longest = max(cnt, longest);
            }
            else
                continue;
        }
        return longest;
    }
};
