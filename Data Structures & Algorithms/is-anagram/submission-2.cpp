class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        char frequency[26] = {0};
        for(int i = 0; i < s.length(); i++){
            char c = s[i];
            frequency[c - 'a']++;
        }
        for(int j = 0; j < t.length(); j++){
            char d = t[j];
            frequency[d - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(frequency[i] != 0){
                return false;
            }
        }
        return true;
    }
};
