class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int sum=0;
        int left=0;
        int ans=0;
        //我的思路还是 枚举右端点,维护左断点
        //如果两个子字符串的消耗sum,在maxcost范围内,则继续扩张,否则减去left上的消耗,left++
        //维护ans 为i-left+1的最大值;
        //时间复杂度O(n),空间复杂度O(n);
        vector<int> def(s.size(),0);
    
        for(int i=0;i<s.size();i++)
        {
            def[i]=abs(s[i]-t[i]);
            sum+=def[i];
            while (sum>maxCost)
            {
                sum-=def[left];
                left++;
            }
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};
