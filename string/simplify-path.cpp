class Solution {
public:
    string simplifyPath(string path) {
        stack <string>st;
        string word ="";
        for(int i =0;i<path.size(),i++){
            if(path[i]=="/" && i+1<path.size()){
                if(path[i+1]!="/"){
                    st.push("/");
                }
            }
            else {
                word+=path[i];
                if(path[i+1]=="/"){
                    if(word==".."){
                        st.pop();
                        st.pop();
                    }
                }
            }
        }
    }
};