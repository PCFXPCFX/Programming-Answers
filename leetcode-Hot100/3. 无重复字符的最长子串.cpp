class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> visited;
        int n=s.size(),len=0,maxlen=0;
        int left = 0;
        for(int i=0;i<n;i++)//思想 ：枚举右端点，维护左端点
        {
            visited[s[i]]++;
            while(visited[s[i]]!=1)
            //注意这里得>1,不能写！=0因为上面加了一个，应该要变成一个，而不是变成0个,!=1也行
            {
                visited[s[left]]--;
                left++;
            }
            len = i-left+1;
            maxlen = max(maxlen,len);
        }
        return maxlen;
        
    }
};
