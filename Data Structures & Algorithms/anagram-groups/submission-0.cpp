class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            int count[26] = {0};

            for(int j = 0; j < s.size(); j++){
                count[s[j]-'a']++;
            }
            string key = "";
            for(int k = 0; k < 26;k++){
                key += '#' + to_string(count[k]);
            }
            anagramMap[key].push_back(s);
        }
        vector<vector<string>> result;
        vector<string> keys;
        for(pair<const string, vector<string>>p:anagramMap){
            keys.push_back(p.first);
        }
        for(int i = 0; i < keys.size(); i++){
            result.push_back(anagramMap[keys[i]]);
        }
        return result;
    }
};
