class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        //这题思路也是类似的,枚举右端点,维护左端点
        //我们可以维护一个 unordered_map,每次添加后判断频率是否大于k,若大于,则移动左端点,直到不大于k
        //此时就有了一个好数组,
        //维护一个ans 是i-left+1的最大值;
        //时间复杂度O(N),空间复杂度是O(1)
        unordered_map <int,int>m;
        int left=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            while(m[nums[i]]>k)
            {
                m[nums[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
