class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        unordered_map <int,int> hash;
        stack<int>stk;
        int idx=0;
        for(int x:temperatures){
            hash[x]=idx;
            idx+=1;
        }
        for(int i=temperatures.size()-1 ; i>=0; i--){
            if(stk.empty()){
                stk.push(temperatures[i]);
                temperatures[i]=0;
            }
            else{
                while(!stk.empty() && stk.top() < temperatures[i]){
                    stk.pop();
                }
                if(stk.empty()){
                    stk.push(temperatures[i]);
                    temperatures[i]=0;
                }
                else{
                    int a=stk.top();
                    stk.push(temperatures[i]);
                    temperatures[i]=hash[a]-i;
                }
            }
        }
        return temperatures;
    }
};