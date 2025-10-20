class MyStack {
public:
    queue<int>a,b;
    MyStack() {
        
    }
    
    void push(int x) {
        while(b.size()!=0){
            a.push(b.front());
            b.pop();
        }
        a.push(x);
    }
    
    int pop() {
        while(a.size()!=1){ b.push(a.front());a.pop();}
        int po=a.front();
        a.pop();
        while(b.size()!=0){
            a.push(b.front());
            b.pop();
        }
        return po;
    }
    
    int top() {
        while(a.size()!=1){ b.push(a.front());a.pop();}
        int po=a.front();
        a.pop();
        b.push(po);
        while(b.size()!=0){
            a.push(b.front());
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
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */