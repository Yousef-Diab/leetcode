class MyStack {
public:
    queue<int> q;
    int count;
    MyStack() {
        count=0;
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0;i<count;i++){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        count++;
    }
    
    int pop() {
        count--;
        int temp=q.front();
        q.pop();
        return temp;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
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