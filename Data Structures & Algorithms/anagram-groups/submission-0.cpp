class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> um;
        for(string &s : strs){
            vector<int> count(26,0);
            for(char c : s){
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for(int i=0;i<26;i++){
                key += "," + to_string(count[i]);
            }
            um[key].push_back(s);
        }

        for(auto it : um){
            result.push_back(it.second);
        }

        return result;
    }
};

