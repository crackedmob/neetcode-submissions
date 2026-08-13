class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> seen;
        
        for(int i = 0; i < n; i++){
            int remainder = target - nums[i];
            auto it = seen.find(remainder);
            if(it != seen.end()){ // searched for remainder 
                                                    //and i did find it 
                return{it->second, i};

            }
            seen[nums[i]] = i;
        }
    }
};
