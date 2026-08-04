class MinStack {
private:
    long min;
    stack<long> stacky;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(stacky.empty()){
            stacky.push(0);
            min = val;
            }
            else{
                stacky.push(val - min);
                if(val < min) min = val;
            }
    }
    
    void pop() {
        if(stacky.empty())return;

        long pop = stacky.top();
        stacky.pop();

        if(pop < 0) min = min - pop;
    }
    
    int top() {
        long top = stacky.top();
        return (top > 0)?(top + min):(int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
