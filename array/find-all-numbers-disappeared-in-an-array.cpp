class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> set;
        vector<int> ans;
        int n= nums.size();
        for(int i=0 ;i<n;i++){
            set.insert(nums[i]);
        }
        
        int max=n+1;
        for(int i=1; i<=n;i++){
            if(set.find(i)==set.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};