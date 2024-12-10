class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        //思路,遍历,枚举右端点,维护左端点
        //如果遇到连续的两个相同的,就移动左指针
        //时间:O(n),空间O(1)
        int left=0,ans=1,ans_max=1;
        int have_min_copy=0,last_min_copy_pointer=0;
        if(s.size()==1) return 1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                if(have_min_copy)
                {
                    left=last_min_copy_pointer;
                }
                last_min_copy_pointer=i;
                have_min_copy=1;
            }
            ans = i-left+1;
            ans_max = max(ans_max,ans);
        }
        return ans_max;
    }
};
