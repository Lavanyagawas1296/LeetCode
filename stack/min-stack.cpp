class MinStack {
public:
    std::stack<long long> St;
    long long min, x;
    long long val;
    MinStack() {}

    void push(int value) {
        if (St.empty()) {
            val = value;
            St.push(val);
            min = val;
        } else {
            if (value < min) {
                val = value;
                St.push(2 * val - min);
                min = value;
            } else {
                St.push(value);
            }
        }
    }

    void pop() {
        x = St.top();
        St.pop();
        if (x < min) {
            min = 2 * min - x;
        }
    }

    int top() {
        x = St.top();
        if (x < min) {
            return min;
        } else
            return x;
    }

    int getMin() { return min; }
};

/**
 * Your St object will be instantiated and called as such:
 * St* obj = new St();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
