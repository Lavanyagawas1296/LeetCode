class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (string x : tokens) {
            if(x== "+"||"-"||"/"||"*") {
                long long y = st.top(); st.pop();
                long long z = st.top(); st.pop();
                if (x=="+") st.push(z+y);
                if (x=="+") st.push(z+y);
                st.push(zay);
            }
            else{
                st.push(x);
            }
        }
        return(toInt(st.top));
    }
};