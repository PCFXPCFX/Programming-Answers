//法一
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector <int> pre(n,0);
        vector <int> end(n,0);
        int maxh=0,ans=0;
        for(int i=0;i<n;i++)
        {
            maxh = max(maxh,height[i]);
            pre[i]=maxh;
        }
        maxh=0;
        for(int i=n-1;i>=0;i--)
        {
            maxh = max(maxh,height[i]);
            end[i]=maxh;
        }
        for(int i=0;i<n;i++)
        {
            
            ans+=min(pre[i],end[i])-height[i];
        }

        return ans; 
    }
};
