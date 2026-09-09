class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string word = "", result = "";
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                continue;
            } else {
                word += path[i];
                if (path[i + 1] == '/' || i + 1 == path.size()) {
                    if (word == "..") {
                        if (!st.empty())
                            st.pop();
                        
                    } 
                     else if (word != ".") {
                        st.push(word);
                        
                    }
                    word = "";
                }
            }
        }
        while (!st.empty()) {
            result = '/' + st.top() + result;
            st.pop();
        }
        return result.empty() ? "/" : result;
    }
};