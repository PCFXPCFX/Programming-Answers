class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        //会不会用一个queue来写会好一点
        //只需要检查size（）是不是等于k就行了
        //front就是左端点，枚举右端点，就能知道距离了。
        //字典序用set
        //时间复杂度O(N^2),空间复杂度O(N)
        set<string> output;
        queue<int> arr;
        int p,minlong=2e9;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                arr.push(i);
            }
            while(arr.size()>k)
            {
                arr.pop();
            }
            if(k==arr.size()&&i-arr.front()<minlong)
            {
               output.clear();
                p=arr.front();
                minlong=i-arr.front();
                output.insert(s.substr(p,minlong+1));
            }
            if(k==arr.size()&&i-arr.front()==minlong)
            {
                p=arr.front();
                output.insert(s.substr(p,minlong+1));
            }
        }
            if(output.size()!=0)
            {
            auto ss=*output.begin();
            return ss;
            }
        return "";
    }
};
