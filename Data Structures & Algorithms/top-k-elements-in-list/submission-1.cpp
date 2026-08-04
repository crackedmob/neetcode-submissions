class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        

        for(int i = 0; i < nums.size(); i++){
            count[nums[i]] = 1 + count[nums[i]];
        }
        vector<vector<int>>freq(nums.size() + 1);
        for(unordered_map<int,int> :: iterator it = count.begin(); it != count.end(); it++){
            int num = it->first;
            int frequency = it->second;
            freq[frequency].push_back(num);
        }
        vector<int>res;
        for(int i = freq.size()-1; i > 0; i--){
            for(int j = 0; j < freq[i].size(); j++){
                res.push_back(freq[i][j]);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
