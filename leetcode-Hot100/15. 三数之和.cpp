//第一版 没有剪枝和其他的操作
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> reslut;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int target=nums[i];
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum>0)
                {
                    right--;
                }
                else if(sum<0)
                {
                    left++;
                }
                else
                {
                    reslut.push_back({nums[i],nums[left],nums[right]});
                    break;
                }
            }
        }
        return reslut;
        
    }
};
