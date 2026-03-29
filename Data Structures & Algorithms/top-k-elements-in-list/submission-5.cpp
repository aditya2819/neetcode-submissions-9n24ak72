class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
        }
        vector<pair<int, int>> freqVec;
        for(auto& f  : freq){
            freqVec.push_back({f.second, f.first});
        }
        sort(freqVec.rbegin(), freqVec.rend());
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(freqVec[i].second);
        }
        return res;
    }
};
