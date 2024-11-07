//法1 超时!
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {//滑动窗口
        int k=p.size(),n=s.size();
        vector<int> output;
        sort(p.begin(),p.end()) ;
        for(int i=0;i<=n-k;i++)
        {
            string temp=s.substr(i,k);
            sort(temp.begin(),temp.end());
            if(p==temp)
            {
                output.push_back(i);
            }
        }
        return output;
    }
};

//法二 滑动数组
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {//滑动窗口
        int k=p.size(),n=s.size();
        if (k>n) return vector<int>();
        vector<int> output;
        vector<int> set1(26,0);
        vector<int> set2(26,0);
        for(int i=0;i<k;i++)
        {
            set1[p[i]-'a']++;
            set2[s[i]-'a']++;
        }
        if(set1==set2)
        {
            output.push_back(0);
        }
        for(int i=k;i<n;i++)
        {
            set2[s[i-k]-'a']--;
            set2[s[i]-'a']++;
            if(set2==set1)
            {
                output.push_back(i-k+1);
            }
        }
        return output;
    }
};
