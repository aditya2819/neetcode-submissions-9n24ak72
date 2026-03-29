class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> res(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {
            while (!st.empty() && st.top().first < temperatures[i]) {
                int temp = st.top().first;
                int idx = st.top().second;
                st.pop();
                res[idx] = i - idx;
            }
            st.push({temperatures[i], i});
        }

        return res;
    }
};