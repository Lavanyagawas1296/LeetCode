class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int count=0,sum=0;
        int L=0,R=0;
        for(R=0;R<n;R++){
            sum+=arr[R];
            while(R-L+1>k)
            sum-=arr[L++];
            if(sum>=k*threshold && R-L+1==k)
            count++;
        }
        return count;
    }
};