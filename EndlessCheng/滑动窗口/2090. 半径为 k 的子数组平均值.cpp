class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long n=nums.size(),m=2*k+1,sum=0;
        if(n<m) return vector<int> (n,-1);
        vector<int> oup(n,-1);
        int i=0;
        for(i=0;i<m;i++)
        {
            sum+=nums[i];
        }
        oup[k]=sum/m;
        for(i=m;i<n;i++)
        {
            sum+=nums[i];
            sum-=nums[i-m];
            oup[i-k]=sum/m;
        }
        return oup;
    }
};
