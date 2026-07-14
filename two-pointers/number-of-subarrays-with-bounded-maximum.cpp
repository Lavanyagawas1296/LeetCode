class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n=nums.size();
        int Lcount=0,Rcount=0,Lcurr=0,Rcurr=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=right){
                Rcurr++;
                Rcount+=Rcurr;
            }
            else
            Rcurr=0;
            if(nums[i]<left){
                Lcurr++;
                Lcount+=Lcurr;
            }
            else
            Lcurr=0;
        }
        return Rcount-Lcount;
    }
};