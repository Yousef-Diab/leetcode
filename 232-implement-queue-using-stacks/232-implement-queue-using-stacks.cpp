class MyQueue {
public:
    stack<int>s;
    int count;
    MyQueue() {
        count=0;
    }
    
    void push(int x) {
        vector<int>v(count);
        for(int i=0;i<count;i++){
            v[i]=s.top();
            s.pop();
        }
        s.push(x);
        for(int i=count-1;i>=0;i--){
            s.push(v[i]);
        }
        count++;
    }
    
    int pop() {
        int temp=s.top();
        s.pop();
        count--;
        return temp;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return count==0;
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