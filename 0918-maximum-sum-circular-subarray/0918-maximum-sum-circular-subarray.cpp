class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0;
        int maxsum=nums[0];
        int currmax=0;
        int currmin=0;
        int minsum=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            int v1=currmax+nums[i];
            int v2=nums[i];
            currmax=max(v1,v2);
            maxsum=max(maxsum,currmax);
            int v3=currmin+nums[i];
            int v4=nums[i];
            currmin=min(v3,v4);
            minsum=min(minsum,currmin);
            total+=nums[i];
        }
        if(maxsum<0){
            return maxsum;
        }
        int circularsum=total-minsum;
        return max(maxsum,circularsum);
    }
};