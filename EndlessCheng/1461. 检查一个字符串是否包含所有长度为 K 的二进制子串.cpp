class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set <string> input;
        int n=s.size();
        for(int i=0;i<=n-k;i++)
        {
            input.insert(s.substr(i,k));
        }
        if (input.size() == pow(2,k) )
        //这里可以改进为 return input.size() == (1<<k)
        return true;
        else
        return false;
    }
};
//534ms击败40.00%
//改进后 
//486ms击败48.15%
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set <string> input;
        int n=s.size();
        for(int i=0;i<=n-k;i++)
        {
            input.insert(s.substr(i,k));
        }
        return input.size() == (1<<k);
    }
};
//最优解 来自 liuyubobobo
class Solution {
public:
    bool hasAllCodes(string s, int k) {

        if(k > s.size()) return 0; //如果k要大于字符串长度，则无法找到长度为k的字符串

        int cur = 0;
        for(int i = 0; i < k - 1; i ++)//遍历长度为k的字符串
            cur = 2 * cur + (s[i] == '1');//得到k-1长度字符串的数字

        vector<bool> used(1 << k, false); //创建数组 用于索引
        for(int i = k - 1; i < s.size(); i ++){ //循环玩剩下的
            cur = cur * 2 + (s[i] == '1'); //更新
            used[cur] = true;  //判断
            cur &= ~(1 << (k - 1));// 去处cur二进制第k位
          //1 << (k - 1) 100000(共k位)
          //~ 取反 0111111(共k位)
          //按位与 1&1=1 1&0=0 0&0=0;除去第k位变成0以外,其他位无变化
        }
        
        for(int e: used) if(!e) return false;
        //传值,判断是否全部都包括了
        return true;
    }
};

// 作者：liuyubobobo
// 链接：https://leetcode.cn/problems/check-if-a-string-contains-all-binary-codes-of-size-k/solutions/268475/ha-xi-biao-zhong-cun-zi-fu-chuan-shi-jian-fu-za-du/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
