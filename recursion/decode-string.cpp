class Solution {
public:
    string decodeString(string s) {
        string st="",a="";
        for(char x:s){
            if(x==']'){
                a="";
                while(st.back()!='[' && !st.empty()){
                    a=st.back()+a;
                    st.pop_back();
                }
                if(!st.empty() && st.back()=='['){
                    st.pop_back();
                }
                string num_str = "";
                while (!st.empty() && isdigit(st.back())) {
                    num_str = st.back() + num_str;
                    st.pop_back();
                }
                int n = stoi(num_str);
                for (int i = 0; i < n; i++) {
                    st += a; 
                }
            }
            else{
                st.push_back(x);
            }
        }
        return st;
    }
};