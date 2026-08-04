class Solution {
public:
    bool isValid(string s) {
        stack<char> stacky;
        unordered_map<char, char> closeToOpen = {
            {')','('},
            {']','['},
            {'}','{'}
        };
        for(char c : s){
            if(closeToOpen.count(c)){
                if(!stacky.empty() && stacky.top() == closeToOpen[c]){
                    stacky.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stacky.push(c);
            }
        }
        return stacky.empty();
    }
};
