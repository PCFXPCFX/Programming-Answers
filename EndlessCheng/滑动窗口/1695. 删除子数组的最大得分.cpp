class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        //思路依旧是维护左端点,枚举右端点
        //这个就用那个unordered_set吧,然后判断是不是重复,若重复,改变左端点,
        //之后更新sum,和ans;
        //时间复杂度o(N),空间复杂度O(1)
        unordered_set<int> s;
        int sum=0,ans=0,left=0;
        for(int i=0;i<nums.size();i++)
        {
            while(!s.empty()&&s.count(nums[i]))
            {
                s.erase(nums[left]);
                sum-=nums[left];
                left++;
            } 
            s.insert(nums[i]);
            sum+=nums[i];
            ans=max(ans,sum);
        }
        return ans;
    }
};
