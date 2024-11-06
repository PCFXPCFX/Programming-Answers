class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> visited;
        vector<vector<string>> result;
        for(auto i:strs)
        {
            string isOreder=i;
            sort(isOreder.begin(),isOreder.end());
            visited[isOreder].push_back(i);
        }

        for(auto &i:visited)
        {
            result.push_back(i.second);
        }
        return result;
    }
};
