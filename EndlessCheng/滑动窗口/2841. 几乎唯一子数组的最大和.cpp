class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long cur=0;
        int n=nums.size();
        unordered_map<int,int> countmap;
        long long mSum=0,sum=0;
        for(int i=0;i<k;i++)
        {
            countmap[nums[i]]++;
            sum+=nums[i];
        }
        cur=countmap.size();
        if(cur>=m)
        {
            
            mSum=max(sum,mSum);
        }

        for(int i=k;i<n;i++)
        {
            if(countmap.find(nums[i])==countmap.end()||countmap[nums[i]]==0)
            {
                cur++;
            }
            countmap[nums[i]]++;
            countmap[nums[i-k]]--;
            if(countmap[nums[i-k]]==0)
            {
                cur--;
            }
            sum+=nums[i];
            sum-=nums[i-k];
            if(cur>=m)
            {
                mSum=max(sum,mSum);
            }

        }
        return mSum;
    }
};
