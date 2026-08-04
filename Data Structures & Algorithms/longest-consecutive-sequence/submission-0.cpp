class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res = 0;

        for(int i = 0;  i < nums.size(); i++){
            int num = nums[i];
            if(!mp[num]){
                mp[num] = mp[num-1] + mp[num + 1] + 1;
                mp[num - mp[num - 1]] = mp[num];
                mp[num + mp[num + 1]] = mp[num];
                res = max(res, mp[num]);
            }
        }
        return res;
    }
};
