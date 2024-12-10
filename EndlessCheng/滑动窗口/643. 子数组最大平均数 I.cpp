class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        long long maxsum=LLONG_MIN,temp=0;
        for(int i=0;i<n;i++)
        {
            temp+=nums[i];
            if(i<k-1)
            {
                continue;
            }
            maxsum = max(maxsum,temp);

            temp-=nums[i+1-k];
        }

        return (double)maxsum/k;
        
    }
};
