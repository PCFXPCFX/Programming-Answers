class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        //思想:枚举右端点,维护左端点
        //创建一个map,添加右端点,判断size(),若大于2就将left的果树在map中减一,如果果树数量为0,则earse
        //时间复杂度:O(n),空间复杂度:O(1);
        unordered_map<int,int> collection;
        int left=0,ans=0;
        
        for(int i=0;i<fruits.size();i++)
        {
            collection[fruits[i]]++;
            while(collection.size()>2)
            {
                collection[fruits[left]]--;
                if(collection[fruits[left]]==0)
                {
                    collection.erase(fruits[left]);
                }
                left++;
            }
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};
