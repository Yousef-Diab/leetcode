class MinStack {
public:
    int m;
    long long *arr;
    int count=0;
    MinStack() {
        arr=new long long[3e4+1];
    }
    
    void push(int val) {
        arr[count++]=val;
    }
    
    void pop() {
        count--;
    }
    
    int top() {
        return arr[count-1];
    }
    
    int getMin() {
        m=INT_MAX;
        for(int i=0;i<count;i++){
            m=m>arr[i]?arr[i]:m;
        }
        return m;
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
