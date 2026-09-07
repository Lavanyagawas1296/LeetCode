class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string r1="",r2="";
        for(char x : s){
            if(x=='#'){
                if(!r1.empty()) r1.pop_back();
            }
            
            else{
                r1.push_back(x);
            }
        }
        for(char x : t){
            if(x=='#'){
                if(!r2.empty()) r2.pop_back();

            }

            else{
                r2.push_back(x);
            }
        }
        return r1 == r2;
    }
};