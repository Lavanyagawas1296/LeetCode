class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double Fsum=-1e18;
        double sum=0;
        int j=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(i>=k-1){
                Fsum=max(sum,Fsum);
                sum-=nums[j];
                j++;
            }
        }
        return (Fsum/k);
    }
};