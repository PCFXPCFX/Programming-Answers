//560. 和为 K 的子数组
//法1  维护左端点 遍历右端点（无法解决负数）
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {//思路：枚举有端点，维护左端点
        int i=0,n =nums.size();
        int sum=0,ans=0;
        int  left=0;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
            while(left<n&&sum-nums[left]>=k)
            {
                sum-=nums[left];
                left++;
            }
            if(sum==k&&left<=i)
            {
                ans++;
            }
        }
        return ans;
    }
};
//法二，前缀和+哈希表

//注意到 子串=k 也就是 现在从0到i的和 sum - 从0开始的子串 = k
//我们只需要找到 sum-k 这一子串即可


