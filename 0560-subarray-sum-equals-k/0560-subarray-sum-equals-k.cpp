class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        int res=0;

        unordered_map<int,int>f;
        f[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int quest=sum-k;
            int freq=f[quest];
            res+=freq;
            f[sum]++;


        }
        return res;
    }
};