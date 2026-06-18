class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> s;
        for(string word: strs){
            string key = word;
            sort(key.begin(), key.end());
            s[key].push_back(word);
        }
        vector<vector<string>> ans;
        for(auto it : s){
            ans.push_back(it.second);
        }
        return ans;
    }
};
