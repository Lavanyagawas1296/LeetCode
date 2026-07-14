class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>hash;
        int n=nums.size();
        hash[0]=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            nums[i]=(-1);
        }  
        int cu=0,len=0;
        for(int i=0;i<n;i++){
            cu+=nums[i];
            if(hash.find(cu)!=hash.end())
            len=max(len,i-hash[cu]);
            else
            hash[cu]=i;
        }
    return len;
    }
};