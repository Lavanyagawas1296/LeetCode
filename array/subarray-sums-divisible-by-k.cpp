class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        int n=nums.size();
        int count=0,cu=0;
        for(int i=0;i<n;i++){
            cu+=nums[i];
            if(cu%k==0)
            count++;
            int mod=cu%k;
            if (mod<0)
            mod=(mod+k)%k;
            if(hash.find(mod)!=hash.end())
            count+=hash[mod];
            hash[mod]++;
        }
        return count;
    }
};