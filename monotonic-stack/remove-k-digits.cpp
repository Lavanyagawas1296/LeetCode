class Solution {
public:
    string removeKdigits(string num, int k) {
        string str = "";
        int i = 0;
        if (k == num.length()) {
            return "0";
        }
        for (char x : num) {
            if (str.empty()) {
                str.push_back(x);
            } else {
                while (!str.empty() && str.back() > x && k != 0) {
                    str.pop_back();
                    k--;
                }
                str.push_back(x);
            }
        }
        while (k != 0 && !str.empty()) {
            str.pop_back();
            k--;
        }
        while (i < str.length() && str[i] == '0') {
            i++;
        }
    return (i == str.length()) ? "0" : str.substr(i);    
    }
};