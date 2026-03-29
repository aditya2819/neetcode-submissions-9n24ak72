class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap(stones.begin(), stones.end());
        int s1 = 0, s2 = 0;
        while(maxHeap.size() > 2){
            s1 = maxHeap.top();
            maxHeap.pop();
            s2 = maxHeap.top();
            maxHeap.pop();
            if(s1 == s2){
                continue;
            }
            else{
                maxHeap.push(abs(s1 - s2));
            }
        }
        if(maxHeap.size() == 1)
            return maxHeap.top();
        else{
            s1 = maxHeap.top();
            maxHeap.pop();
            s2 = maxHeap.top();
            return abs(s1 - s2);
        }
    }
};
