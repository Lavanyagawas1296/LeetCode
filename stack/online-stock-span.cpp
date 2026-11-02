class StockSpanner {
    stack<pair<int, int>> stk;    
    int i = -1;
public:
    StockSpanner() {
    }
    
    int next(int price) {
        i++;
        if(stk.empty()){                
            stk.push({price,i});
            return i-(-1);
        }
        else{
            while (!stk.empty() && stk.top().first <= price){
                stk.pop();
            }
            if(stk.empty()){
                stk.push({price,i});
                return i-(-1);
            }
            else{
                int x =stk.top().second;
                stk.push({price,i});
                return i-x;
            }
        }
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */