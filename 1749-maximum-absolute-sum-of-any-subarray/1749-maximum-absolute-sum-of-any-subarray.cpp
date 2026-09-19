class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int maxending=nums[0];
        int minending=nums[0];
        int ans=abs(nums[0]);
        for(i=1;i<n;i++){
            int v1=maxending+nums[i];
            int v2=nums[i];
            maxending=max(v1,v2);
            int v3=minending+nums[i];
            int v4=nums[i];
            minending=min(v3,v4);
            ans=abs(max(ans,max(abs(maxending),abs(minending))));
        }
        return ans;

    }
};