class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int sum=0;
        int left=0;
        int ans=0;
        //我的思路还是 左右端点
        //如果两个sum之差在maxcost范围内,则继续扩张,否则left++
        //维护ans 为i-left+1的最大值;
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
