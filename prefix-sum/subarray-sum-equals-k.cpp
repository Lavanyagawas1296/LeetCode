class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        int count=0;
        int sum=0;
        for(int i=0 ; i < nums.size() ; i++){
            sum+=nums[i];
            if(sum==k)
            count++;
            int rem=sum-k;
            if(hash.find(rem)!=hash.end())
            {
                count+=hash[rem];
            }
            hash[sum]++;
        }
        return count;
    }
};