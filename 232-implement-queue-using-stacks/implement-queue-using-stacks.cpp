class MyQueue {
public:
stack<int>a,b;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(b.size()!=0){
            a.push(b.top());
            b.pop();
        }
        a.push(x);
    }
    
    int pop() {
        while(a.size()!=1){
            b.push(a.top());
            a.pop();
        }
        int po=a.top();
        a.pop();
        while(b.size()!=0){
            a.push(b.top());
            b.pop();
        }
        return po;
    }
    
    int peek() {
        while(a.size()!=1){
            b.push(a.top());
            a.pop();
        }
        int po=a.top();
        a.pop();
        b.push(po);
        while(b.size()!=0){
            a.push(b.top());
            b.pop();
        }
        return po;
    }
    
    bool empty() {
        if(a.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */