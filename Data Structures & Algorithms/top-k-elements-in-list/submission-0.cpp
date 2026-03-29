class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    std::unordered_map<int, int> counts;
    for (int num : nums) {
        counts[num]++;
    }

    // Create n + 1 buckets
    // Index i stores a list of numbers that appear exactly i times
    std::vector<std::vector<int>> buckets(n + 1);
    for (auto const& [num, freq] : counts) {
        buckets[freq].push_back(num);
    }

    std::vector<int> result;
    // Iterate from highest frequency bucket down to 1
    for (int i = n; i >= 1 && result.size() < k; --i) {
        for (int num : buckets[i]) {
            result.push_back(num);
            if (result.size() == k) break;
        }
    }
    
    return result;
    }
};
