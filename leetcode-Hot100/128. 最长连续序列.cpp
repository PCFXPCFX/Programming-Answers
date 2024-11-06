class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set <int> visited;
        for(auto i:nums)
        {
            visited.insert(i);
        }
        int maxl=1,l=1;
        for(auto i:visited)
        {
            l=1;
            if(visited.count(i-1)) continue;
            while(visited.count(i+l))
            {
                l++;
            }
            maxl = max(maxl,l);
        }
        return maxl;
    }
};
