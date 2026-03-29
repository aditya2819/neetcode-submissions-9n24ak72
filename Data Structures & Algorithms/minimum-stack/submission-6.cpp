class MinStack {

private:
    stack<int> data;
    stack<int> minSt;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        data.push(val);
        if(minSt.empty())
            minSt.push(val);
        else
            minSt.push(min(val, minSt.top()));
    }
    
    void pop() {
        if(data.empty())
            return;
        data.pop();
        minSt.pop();
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
