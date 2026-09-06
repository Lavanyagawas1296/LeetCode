class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (string x : tokens) {
            if(x== "+"||x=="-"||x=="/"||x=="*") {
                long long y = st.top(); st.pop();
                long long z = st.top(); st.pop();
                if (x=="+") st.push(z+y);
                else if (x=="-") st.push(z-y);
                else if (x=="/") st.push(z/y);
                else if (x=="*") st.push(z*y);
            }
            else{
                st.push(stoll(x));
            }
        }
        return(st.top());
    }
};