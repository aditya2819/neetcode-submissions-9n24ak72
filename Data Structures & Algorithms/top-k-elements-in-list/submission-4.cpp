class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> res;
        for(int num : nums)
            freq[num]++;
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto &f : freq)
            buckets[f.second].push_back(f.first);
        for(int i = (int)buckets.size() - 1; i >= 1 && (int)res.size() < k; i--){
            for(int buc : buckets[i]){
                res.push_back(buc);
                if((int)res.size() == k)
                    break;
            }
        }
        return res;
    }
};
