class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    unordered_map<int,int>hash;
    int cu=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]%2!=0)
        nums[i]=1;
        else
        nums[i]=0;
    }    
    int count=0;
    for(int i=0;i<n;i++){
        cu+=nums[i];
        if(cu==k)
        count++;
        int rem=cu-k;
        if(hash.find(rem)!=hash.end())
        count+=hash[rem];
        hash[cu]++;
    }
    return count;
    }
};