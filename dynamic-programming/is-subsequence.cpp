class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp=0,tp=0;
        for(int tp=0; tp<t.size();tp++){
            if(s[sp]==t[tp]){
                sp++;
            }
        }
        if(sp==s.size())
        {return true;}
        else
        {return false;}
    }
};