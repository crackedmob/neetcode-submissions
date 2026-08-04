class Solution {
public:
    const int LEN_WIDTH = 4;
    string encode(vector<string>& strs) {
        string encoded;
        for(int i = 0; i <strs.size(); i++){
            int len = strs[i].length();
            string len_str = string(LEN_WIDTH - to_string(len).length(),'0')+to_string(len);
            
            encoded += len_str + strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            string len_str = s.substr(i, LEN_WIDTH);
            int len = stoi(len_str);
            i += LEN_WIDTH;

            string current_str = s.substr(i, len);
            result.push_back(current_str);
            i += len;
        }
        return result;
    }
};
