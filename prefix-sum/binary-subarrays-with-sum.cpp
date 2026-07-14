class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>hash;
        int n=nums.size();
        int cu=0,count=0;
        for(int i=0;i<n;i++){
            cu+=nums[i];
            if(cu==goal){
                count++;
            }
            int rem=cu-goal;
            if(hash.find(rem)!=hash.end()){
                count+=hash[rem];
            }
            hash[cu]++;
        }
        return count;
    }
};