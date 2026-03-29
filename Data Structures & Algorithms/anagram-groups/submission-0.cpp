class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(string s : strs){
            string key = s;
            sort(key.begin(), key.end());
            res[key].push_back(s);
        }
        vector<vector<string>> mp;
        for(auto& it : res){
            mp.push_back(it.second);
        }
        return mp;
    }
};
