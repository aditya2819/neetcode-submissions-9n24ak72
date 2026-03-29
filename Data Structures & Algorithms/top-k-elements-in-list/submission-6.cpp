class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> res;
        for(int num : nums)
            freq[num]++;
        priority_queue<pair<int, int>> maxHeap;
        for(auto& m : freq){
            maxHeap.push({m.second, m.first});
        }
        for(int i = 0; i < k && !maxHeap.empty(); i++){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
};