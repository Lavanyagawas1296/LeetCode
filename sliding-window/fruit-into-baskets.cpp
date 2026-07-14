class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>hash;
        int n=fruits.size();
        int distinct=0,maxlen=0,R=0,L=0;
        for(R=0;R<n;R++){
            if(hash.find(fruits[R])==hash.end())
            distinct++;

            while(distinct>2){
                hash[fruits[L]]--;
                if (hash[fruits[L]] == 0) {
                    hash.erase(fruits[L]);
                    distinct--;
                }
                L++;
            }
            maxlen=max(maxlen,R-L+1);
            hash[fruits[R]]++;
        }
        return maxlen;
    }
};