class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap(stones.begin(), stones.end());
        int i = 0;
        int j = 0;
        while(maxHeap.size() > 1){
            i = maxHeap.top();
            maxHeap.pop();
            j = maxHeap.top();
            maxHeap.pop();
            if(i - j != 0)
                maxHeap.push(abs(i - j));
        }
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};
