class MinStack {
public:
stack<long>a,b;
    MinStack() {
        
    }
    
    void push(int val) {
        a.push(val);
        if(b.empty()) b.push(val);
        else{
            if(val<b.top()) b.push(val);
            else b.push(b.top());
        }
    }
    
    void pop() {
        a.pop();
        b.pop();
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return b.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */