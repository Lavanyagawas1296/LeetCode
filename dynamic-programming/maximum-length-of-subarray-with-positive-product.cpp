class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pos=0,neg=0,ans=0,new_pos=0,new_neg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                new_pos=(neg>0)? neg+1:0;
                new_neg=pos+1;
            }
            else if(nums[i]>0){
                new_neg=(neg>0)? neg+1:0;
                new_pos=pos+1;
            }
            else{
                pos=0;
                neg=0;
            }
            ans=max(ans,new_pos);
            pos=new_pos;
            neg=new_neg;
            new_pos=0;new_neg=0;
        }
        return ans;
    }
};