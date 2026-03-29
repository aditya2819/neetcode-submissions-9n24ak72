class MinStack {

private:
    stack<int> data;
    stack<int> minData;

public:
    MinStack() {
    }
    
    void push(int val) {
        data.push(val);

        if (minData.empty() || val <= minData.top()) {
            minData.push(val);
        }
    }
    
    void pop() {
        if (data.empty())
            return;

        if (data.top() == minData.top()) {
            minData.pop();
        }

        data.pop();
    }

    int top() {
        return data.top();
    }
    
    int getMin() {
        return minData.top();
    }
};