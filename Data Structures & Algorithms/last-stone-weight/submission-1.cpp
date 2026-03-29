class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int s : stones){
            maxHeap.push(s);
        }
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
